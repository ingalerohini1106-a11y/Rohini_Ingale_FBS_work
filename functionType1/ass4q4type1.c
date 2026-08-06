void strong();
void main()
{
	strong();
}
void strong()
{
	int n,i,temp,rem,sum,f,j;

	printf("Enter n:- ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		temp=i;
		sum=0;

		for(;temp>0;temp=temp/10)
		{
			rem=temp%10;
			f=1;

			for(j=1;j<=rem;j++)
			{
				f=f*j;
			}

			sum=sum+f;
		}

		if(sum==i)
			printf("%d ",i);
	}
}