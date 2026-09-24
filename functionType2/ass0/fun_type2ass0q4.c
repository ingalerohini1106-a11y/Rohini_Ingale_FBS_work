int swap();
void main()
{
    int a;
    a=swap();
    printf("Swapped value of a = %d", a);
}
int swap()
{
    int a=10,b=20,temp;
    temp=a;
    a=b;
    b=temp;
    return a;
}