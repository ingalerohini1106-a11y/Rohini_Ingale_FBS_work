int mystrncmp(char[],char[],int);
int main()
{
    char s1[]="Hello";
    char s2[]="Help";
    if(mystrncmp(s1,s2,3)==0)
        printf("First 3 characters are same");
    else
        printf("Different");
}
int mystrncmp(char s1[],char s2[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(s1[i]!=s2[i])
        {
            return s1[i]-s2[i];
        }
        if(s1[i]=='\0')
        {
            break;
        }
    }
    return 0;
}