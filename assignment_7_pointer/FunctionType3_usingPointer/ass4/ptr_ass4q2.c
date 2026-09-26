void prime(int*);
void main()
{
	int no;
	printf("Enter number:");
	scanf("%d",&no);
	prime(&no);
}
void prime(int *n)
{
	for(int i=2;i<=(*n);i++)
	{
		int status=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				status=1;
			}
		}
		if(status==0)
		{
			printf("%d ",i);
		}
	}
}