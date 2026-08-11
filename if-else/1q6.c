void main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
        printf("Character is Uppercase");
    else
        printf("Character is Lowercase");
}