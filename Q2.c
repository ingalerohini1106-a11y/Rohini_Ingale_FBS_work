void replaceCharacter()
{
    char str[100], ch, symbol;
    int i;
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    printf("Enter character to replace: ");
    scanf(" %c", &ch);
    printf("Enter special symbol: ");
    scanf(" %c", &symbol);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
            str[i] = symbol;
    }
    printf("String after replacement: %s", str);
}
int main()
{
    replaceCharacter();
    return 0;
}