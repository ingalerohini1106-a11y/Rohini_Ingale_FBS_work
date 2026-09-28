void mystrncat(char[],char[],int);
int main()
{
    char s1[30]="Hello ";
    char s2[]="World";
    mystrncat(s1,s2,3);
    printf("%s", s1);
}
void mystrncat(char s1[],char s2[],int n)
{
    int i=0, j=0;
    while(s1[i]!='\0')
    {
        i++;
    }
    while(s2[j]!='\0' && j<n)
    {
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
}