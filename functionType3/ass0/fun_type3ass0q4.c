void swap(int,int);
void main()
{
    swap(10,20);
}
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("After Swap:\na = %d\nb = %d", a, b);
}