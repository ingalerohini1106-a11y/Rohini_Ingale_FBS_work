int mystrncasecmp(char[],char[],int);
int main()
{
    char s1[]="HELLO";
    char s2[]="hello";
    if(mystrncasecmp(s1,s2,5)==0)
        printf("Same");
    else
        printf("Different");
}
int mystrncasecmp(char s1[],char s2[],int n)
{
    int i;
    char c1, c2;
    for(i=0;i<n;i++)
    {
        c1=s1[i];
        c2=s2[i];
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
        if(c1=='\0')
        {
            break;
        }
    }
    return 0;
}