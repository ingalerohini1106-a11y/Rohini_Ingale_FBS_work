char *mystrnstr(char[],char[],int);
int main()
{
    char str[]="Hello World";
    char sub[]="World";
    if(mystrnstr(str,sub,11)!=0)
        printf("Found");
    else
        printf("Not Found");
}
char *mystrnstr(char str[],char sub[],int n)
{
    int i, j;
    for(i=0; str[i]!='\0' && i<n;i++)
    {
        for(j=0; sub[j]!='\0'; j++)
        {
            if(i+j>=n || str[i+j]!=sub[j])
                break;
        }
        if(sub[j]=='\0')
            return &str[i];
    }
    return 0;
}