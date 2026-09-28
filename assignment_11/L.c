char *mystrrchr(char[],char);
int main()
{
    char str[]="Hello";
    if(mystrrchr(str,'l') != 0)
        printf("Last occurrence found");
    else
        printf("Character not found");
}
char *mystrrchr(char str[],char ch)
{
    int i=0;
    char *pos=0;
    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            pos=&str[i];
        }
        i++;
    }
    return pos;
}