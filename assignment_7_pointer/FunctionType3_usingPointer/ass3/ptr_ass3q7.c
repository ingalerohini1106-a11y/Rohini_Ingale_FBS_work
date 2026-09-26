void factorial(int*);
void main()
{
	int n;
	printf("Enter no : ");
	scanf("%d",&n);
	factorial(&n);
}
void factorial(int *no)
{
	int i=1,fact=1;
	while(i<=(*no))
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial of %d is %d ",*no,fact);
}