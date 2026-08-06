void digit();
void main()
{
	digit();
}
void digit()
{
	int n,last,first;
	printf("Enter number:- ");
	scanf("%d",&n);

	last=n%10;

	while(n>=10)
	{
		n=n/10;
	}

	first=n;

	printf("Sum = %d",first+last);
}