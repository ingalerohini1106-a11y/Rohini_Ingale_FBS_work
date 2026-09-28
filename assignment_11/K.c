char *mystrchr(char[],char);
int main()
{
    char str[]="Hello";
    if(mystrchr(str,'l')!=0)
        printf("Character found");
    else
        printf("Character not found");
}
char *mystrchr(char str[],char ch)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            return &str[i];
        }
        i++;
    }
    return 0;
}