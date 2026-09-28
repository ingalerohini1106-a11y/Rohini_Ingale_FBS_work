void mystrrev(char[]);
int main()
{
    char str[]="Hello";
    mystrrev(str);
    printf("%s",str);
}
void mystrrev(char str[])
{
    int i=0,j,temp;
    while(str[i]!='\0')
    {
        i++;
    }
    j=i-1;
    for(i=0;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}