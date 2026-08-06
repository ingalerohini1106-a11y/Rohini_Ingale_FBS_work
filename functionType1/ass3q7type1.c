void fact();
void main()
{
	fact();
}
void fact()
{
	int n,i=1,f=1;
	printf("Enter number:- ");
	scanf("%d",&n);

	while(i<=n)
	{
		f=f*i;
		i++;
	}

	printf("Factorial = %d",f);
}