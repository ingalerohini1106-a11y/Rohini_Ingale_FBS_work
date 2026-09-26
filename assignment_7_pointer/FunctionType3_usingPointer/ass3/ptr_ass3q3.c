void sum(int*,int*);
void main()
{
	int s,e;
	printf("Enter start & end number:");
	scanf("%d%d",&s,&e);
	sum(&s,&e);
}
void sum(int *start, int *end)
{
	int sum=0,x=*start;
	while(x<=(*end))
	{
		sum=sum+x;
		x++;
	}
	printf("Sum of %d to %d is %d ",*start, *end,sum);	
}