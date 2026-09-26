void swap(int*,int*);
void main()
{
	int a=10,b=20;
	printf("Before swap a=%d b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter Swap a=%d b=%d",a,b);
}
void swap(int *x,int *y)
{
    int temp=*x;
    *x = *y;
    *y = temp;
}