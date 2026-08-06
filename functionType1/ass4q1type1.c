void armstrong();
void main()
{
	armstrong();
}
void armstrong()
{
	int n,i,temp,rem,sum;

	printf("Enter n:- ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		temp=i;
		sum=0;

		for(;temp>0;temp=temp/10)
		{
			rem=temp%10;
			sum=sum+(rem*rem*rem);
		}

		if(sum==i)
			printf("%d ",i);
	}
}