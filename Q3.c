struct Task
{
    int taskId;
    char description[100];
    char status[20];
};
void addTask(struct Task task[], int *count)
{
    printf("\nEnter Task ID: ");
    scanf("%d", &task[*count].taskId);
    printf("Enter Description: ");
    scanf(" %[^\n]", task[*count].description);
    printf("Enter Status: ");
    scanf("%s", task[*count].status);
    (*count)++;
    printf("Task added successfully.\n");
}
void updateTask(struct Task task[], int count)
{
    int id, i;
    printf("\nEnter Task ID to update: ");
    scanf("%d", &id);
    for(i = 0; i < count; i++)
    {
        if(task[i].taskId == id)
        {
            printf("Enter new Description: ");
            scanf(" %[^\n]", task[i].description);

            printf("Enter new Status: ");
            scanf("%s", task[i].status);

            printf("Task updated successfully.\n");
            return;
        }
    }

    printf("Task not found.\n");
}

void displayTasks(struct Task task[], int count)
{
    int i;

    printf("\n--- TO-DO LIST ---\n");

    for(i = 0; i < count; i++)
    {
        printf("\nTask ID: %d", task[i].taskId);
        printf("\nDescription: %s", task[i].description);
        printf("\nStatus: %s\n", task[i].status);
    }
}
int main()
{
    struct Task task[50];
    int count = 0;
    int choice;

    do
    {
        printf("\n===== TO-DO LIST =====");
        printf("\n1. Add Task");
        printf("\n2. Update Task");
        printf("\n3. Display Tasks");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addTask(task, &count);
                break;

            case 2:
                updateTask(task, count);
                break;

            case 3:
                displayTasks(task, count);
                break;

            case 4:
                printf("Exit");
                break;

            default:
                printf("Invalid choice");
        }

    } while(choice != 4);

    return 0;
}