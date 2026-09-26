int swap(int,int);
void main()
{
    int a=swap(10,20);
    printf("Swapped value of a = %d", a);
}
int swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    return a;
}