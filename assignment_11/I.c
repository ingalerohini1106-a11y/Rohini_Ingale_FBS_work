char *mystrstr(char[],char[]);
int main()
{
    char str[]="Hello World";
    char sub[]="World";
    if(mystrstr(str,sub)!=0)
        printf("Substring found");
    else
        printf("Substring not found");
}
char *mystrstr(char str[],char sub[])
{
    int i,j;
    for(i=0;str[i]!='\0';i++)
    {
        for(j=0; sub[j]!='\0';j++)
        {
            if(str[i+j]!=sub[j])
            {
                break;
            }
        }
        if(sub[j]=='\0')
        {
            return &str[i];
        }
    }
    return 0;
}