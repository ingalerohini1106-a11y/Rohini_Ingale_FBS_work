#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Player
{
    int jerseyNo;
    char playerName[50];
    int runs;
    int wickets;
    int matches;
} Player;

Player *p;
int count = 0;
int capacity = 2;

void addPlayer();
void removePlayer();
void searchPlayer();
void updatePlayer();
void sortPlayers();
void displayAllPlayers();
void displayPlayer(int i);

int main()
{
    int choice = 0;
//memory allocation
    p = (Player *)malloc(capacity * sizeof(Player));

    if (p == NULL)
    {
        printf("\nMemory Allocation Failed!");
        return 1;
    }

    while (choice != 7)
    {
        printf("\n\n=================================");
        printf("\n     PLAYER MANAGEMENT SYSTEM");
        printf("\n=================================");

        printf("\n1. Add Player");
        printf("\n2. Remove Player");
        printf("\n3. Search Player");
        printf("\n4. Update Player Data");
        printf("\n5. Display Sorted Players");
        printf("\n6. Display All Players");
        printf("\n7. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addPlayer();
                break;

            case 2:
                removePlayer();
                break;

            case 3:
                searchPlayer();
                break;

            case 4:
                updatePlayer();
                break;

            case 5:
                sortPlayers();
                break;

            case 6:
                displayAllPlayers();
                break;

            case 7:
                printf("\nThank You!");
                break;

            default:
                printf("\nInvalid Choice!");
        }
    }

    free(p);

    return 0;
}
//Add Player
void addPlayer()
{
    int i;

//increased memory
    if (count == capacity)
    {
        capacity = capacity * 2;

        Player *temp;

        temp = (Player *)realloc(
            p, capacity * sizeof(Player));

        if (temp == NULL)
        {
            printf("\nMemory Expansion Failed!");

            capacity = capacity / 2;
            return;
        }

        p = temp;

        printf("\nMemory expanded successfully!");
        printf("\nNew Player Capacity: %d", capacity);
    }

    printf("\nEnter Jersey Number: ");
    scanf("%d", &p[count].jerseyNo);

//Already exist jersey number
    for (i = 0; i < count; i++)
    {
        if (p[i].jerseyNo == p[count].jerseyNo)
        {
            printf("\nThis Jersey Number Already Exists!");

            printf("\nExisting Player: %s",
                   p[i].playerName);

            return;
        }
    }

    printf("Enter Player Name: ");
    scanf(" %49[^\n]", p[count].playerName);

    printf("Enter Runs: ");
    scanf("%d", &p[count].runs);

    printf("Enter Wickets: ");
    scanf("%d", &p[count].wickets);

    printf("Enter Matches Played: ");
    scanf("%d", &p[count].matches);

    count++;

    printf("\nPlayer Added Successfully!");
}

//Display 1 player
void displayPlayer(int i)
{
    printf("\n\nJersey Number: %d",
           p[i].jerseyNo);

    printf("\nPlayer Name: %s",
           p[i].playerName);

    printf("\nRuns: %d",
           p[i].runs);

    printf("\nWickets: %d",
           p[i].wickets);

    printf("\nMatches Played: %d",
           p[i].matches);

    printf("\n--------------------------------");
}

//Remove 1 Player
void removePlayer()
{
    int jerseyNo;
    int i, j;

    printf("\nEnter Jersey Number to remove: ");
    scanf("%d", &jerseyNo);

    for (i = 0; i < count; i++)
    {
        if (p[i].jerseyNo == jerseyNo)
        {
            for (j = i; j < count - 1; j++)
            {
                p[j] = p[j + 1];
            }

            count--;

            printf("\nPlayer Removed Successfully!");

            return;
        }
    }

    printf("\nPlayer Not Found!");

    if (count > 0)
    {
        printf("\n\nAvailable Jersey Numbers:");

        for (i = 0; i < count; i++)
        {
            printf(" %d", p[i].jerseyNo);
        }
    }
}

//search player
void searchPlayer()
{
    int choice;
    int jerseyNo;
    int i;
    int found = 0;

    char name[50];

    int suggestions[100];
    int suggestionCount = 0;

    printf("\n\nSearch Player By:");
    printf("\n1. Jersey Number");
    printf("\n2. Player Name");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);


    //search by jersey no
    if (choice == 1)
    {
        printf("\nEnter Jersey Number: ");
        scanf("%d", &jerseyNo);

        for (i = 0; i < count; i++)
        {
            if (p[i].jerseyNo == jerseyNo)
            {
                printf("\n\nPlayer Found!");

                displayPlayer(i);

                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            printf("\nPlayer Not Found!");

            if (count > 0)
            {
                printf("\n\nAvailable Jersey Numbers:");

                for (i = 0; i < count; i++)
                {
                    printf("\n%d - %s",
                           p[i].jerseyNo,
                           p[i].playerName);
                }
            }
        }
    }


    //search by name or half 

    else if (choice == 2)
    {
        printf("\nEnter Player Name or Part of Name: ");

        scanf(" %49[^\n]", name);


        //containg text 
        for (i = 0; i < count; i++)
        {
            if (strstr(p[i].playerName, name) != NULL)
            {
                suggestions[suggestionCount] = i;

                suggestionCount++;
            }
        }


        //suggestion 
        if (suggestionCount > 0)
        {
            int selected;

            printf("\n\nSuggestions:");

            for (i = 0; i < suggestionCount; i++)
            {
                int index;

                index = suggestions[i];

                printf("\n%d. %s - Jersey %d",
                       i + 1,
                       p[index].playerName,
                       p[index].jerseyNo);
            }

            printf("\n\nEnter suggestion number: ");
            scanf("%d", &selected);


            //Check selected suggestion
            if (selected >= 1 &&
                selected <= suggestionCount)
            {
                int selectedIndex;

                selectedIndex =
                    suggestions[selected - 1];

                printf("\n\nPlayer Found!");

                displayPlayer(selectedIndex);
            }
            else
            {
                printf("\nInvalid Suggestion Number!");
            }
        }

        //no found

        else
        {
            printf("\n\nNo Matching Player Found!");

            if (count > 0)
            {
                printf("\n\nAvailable Players:");

                for (i = 0; i < count; i++)
                {
                    printf("\n%d. %s - Jersey %d",
                           i + 1,
                           p[i].playerName,
                           p[i].jerseyNo);
                }
            }
        }
    }

    else
    {
        printf("\nInvalid Choice!");
    }
}


//updated player

void updatePlayer()
{
    int jerseyNo;
    int i;

    printf("\nEnter Jersey Number to update: ");
    scanf("%d", &jerseyNo);

    for (i = 0; i < count; i++)
    {
        if (p[i].jerseyNo == jerseyNo)
        {
            printf("\nPlayer Found!");

            printf("\nPlayer Name: %s",
                   p[i].playerName);

            printf("\n\nCurrent Runs: %d",
                   p[i].runs);

            printf("\nEnter New Runs: ");
            scanf("%d", &p[i].runs);

            printf("\nCurrent Wickets: %d",
                   p[i].wickets);

            printf("\nEnter New Wickets: ");
            scanf("%d", &p[i].wickets);

            printf("\nCurrent Matches Played: %d",
                   p[i].matches);

            printf("\nEnter New Matches Played: ");
            scanf("%d", &p[i].matches);

            printf("\n\nPlayer Data Updated Successfully!");

            return;
        }
    }

    printf("\nPlayer Not Found!");
}


//Sort player

void sortPlayers()
{
    int choice;
    int i, j;

    Player temp;

    if (count == 0)
    {
        printf("\nNo Players Available!");
        return;
    }

    printf("\n\nSort Players By:");

    printf("\n1. Minimum Runs");
    printf("\n2. Maximum Runs");
    printf("\n3. Minimum Wickets");
    printf("\n4. Maximum Wickets");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);


    if (choice < 1 || choice > 4)
    {
        printf("\nInvalid Choice!");
        return;
    }


    for (i = 0; i < count - 1; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            int swap = 0;


            if (choice == 1 &&
                p[i].runs > p[j].runs)
            {
                swap = 1;
            }


            if (choice == 2 &&
                p[i].runs < p[j].runs)
            {
                swap = 1;
            }


            if (choice == 3 &&
                p[i].wickets > p[j].wickets)
            {
                swap = 1;
            }


            if (choice == 4 &&
                p[i].wickets < p[j].wickets)
            {
                swap = 1;
            }


            if (swap == 1)
            {
                temp = p[i];

                p[i] = p[j];

                p[j] = temp;
            }
        }
    }


    printf("\n\nSorted Player Records:");

    for (i = 0; i < count; i++)
    {
        displayPlayer(i);
    }
}


//Display all

void displayAllPlayers()
{
    int i;

    if (count == 0)
    {
        printf("\nNo Players Available!");
        return;
    }

    printf("\n\nData Of All Players");

    for (i = 0; i < count; i++)
    {
        displayPlayer(i);
    }
}