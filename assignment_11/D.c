void mystrcat(char[],char[]);
int main()
{
    char s1[30]="Hello ";
    char s2[]="World";
    mystrcat(s1,s2);
    printf("%s",s1);
}
void mystrcat(char s1[],char s2[])
{
    int i=0,j=0;
    while(s1[i]!='\0')
    {
        i++;
    }
    while(s2[j]!='\0')
    {
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
}