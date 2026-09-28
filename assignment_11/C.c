int mystrcmp(char[], char[]);
int main()
{
    char s1[]="Hello";
    char s2[]="Hello";
    if(mystrcmp(s1,s2)==0)
        printf("Strings are same");
    else
        printf("Strings are different");
}
int mystrcmp(char s1[],char s2[])
{
    int i=0;
    while(s1[i]==s2[i] && s1[i]!='\0')
    {
        i++;
    }
    return s1[i]-s2[i];
}