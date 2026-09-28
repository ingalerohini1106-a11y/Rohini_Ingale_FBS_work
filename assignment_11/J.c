int mystrcasecmp(char[],char[]);
int main()
{
    char s1[]="Hello";
    char s2[]="HELLO";
    if(mystrcasecmp(s1,s2)==0)
        printf("Same");
    else
        printf("Different");
    return 0;
}
int mystrcasecmp(char s1[],char s2[])
{
    int i=0;
    while(s1[i]!='\0' && s2[i]!='\0')
    {
        char c1=s1[i];
        char c2=s2[i];
        if(c1>='A' && c1<='Z')
        {
            c1=c1+32;
        }
        if(c2>='A' && c2<='Z')
        {
            c2=c2+32;
        }
        if(c1!=c2)
        {
            return c1-c2;
        }
        i++;
    }
    return s1[i]-s2[i];
}