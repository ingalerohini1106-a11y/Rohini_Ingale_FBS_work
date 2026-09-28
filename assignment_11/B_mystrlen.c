int mystrlen(char[]);
int main()
{
    char str[]="Hello";
    printf("Length = %d", mystrlen(str));
}
int mystrlen(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    return i;
}