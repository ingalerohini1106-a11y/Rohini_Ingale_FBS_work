void sum(int*,int*);
void main()
{
	int a=10,b=20;
    sum(&a,&b);
    
}
void sum(int *x,int *y)
{
    int ans=*x+*y;
    printf("Sum = %d",ans);
}