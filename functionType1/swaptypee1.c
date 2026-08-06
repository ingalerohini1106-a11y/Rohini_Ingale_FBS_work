void swap();
void main()
{
	swap();
}
void swap()
{
	int a,b,temp;
	printf("Enter two numbers:- ");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("%d%d",a,b);
}