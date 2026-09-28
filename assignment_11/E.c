void mystrncpy(char[],char[],int);
int main()
{
    char s1[20],s2[]="Programming";
    mystrncpy(s1,s2,4);
    printf("%s",s1);
}
void mystrncpy(char s1[],char s2[],int n)
{
    int i;
    for(i=0;i<n && s2[i]!='\0';i++)
    {
        s1[i]=s2[i];
    }
    s1[i]='\0';
}