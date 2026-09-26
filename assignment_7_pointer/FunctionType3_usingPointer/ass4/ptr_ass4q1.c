void armstrong(int*);
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	armstrong(&n);
}
void armstrong(int *no)
{
	for(int i=1;i<=(*no);i++)
	{
		int temp=i,rem,sum;
		sum=0;
		while(temp>0)
		{
			rem=temp%10;
			sum=sum+(rem*rem*rem);
			temp=temp/10;
		}
		if(sum==i)
		{
			printf("%d ",i);
		}
	}
}