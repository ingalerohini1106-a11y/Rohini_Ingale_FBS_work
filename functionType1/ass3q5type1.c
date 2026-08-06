void armstrong();
void main()
{
	armstrong();
}
void armstrong()
{
	int n,temp,rem,sum=0;
	printf("Enter number:- ");
	scanf("%d",&n);

	temp=n;

	while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}

	if(temp==sum)
		printf("Armstrong");
	else
		printf("Not Armstrong");
}