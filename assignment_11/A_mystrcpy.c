void mystrcpy(char[],char[]);
int main()
{
    char s1[20], s2[]="Hello";
    mystrcpy(s1, s2);
    printf("Copied string = %s",s1);
}
void mystrcpy(char s1[],char s2[])
{
    int i=0;
    while(s2[i]!='\0')
    {
        s1[i]=s2[i];
        i++;
    }
    s1[i]='\0';
}