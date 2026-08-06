void strong();
void main()
{
	strong();
}
void strong()
{
	int n,temp,rem,sum=0,f,i;
	printf("Enter number:- ");
	scanf("%d",&n);

	temp=n;

	while(n>0)
	{
		rem=n%10;
		f=1;
		i=1;

		while(i<=rem)
		{
			f=f*i;
			i++;
		}

		sum=sum+f;
		n=n/10;
	}

	if(temp==sum)
		printf("Strong");
	else
		printf("Not Strong");
}