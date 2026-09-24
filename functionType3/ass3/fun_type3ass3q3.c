void sum(int,int);
void main()
{
	int start,end;
	printf("Enter start & end:");
	scanf("%d%d",&start,&end);
	sum(start,end);
}
void sum(int start, int end)
{
	int sum=0,x=start;
	while(start<=end)
	{
		sum=sum+start;
		start++;
	}
	printf("Sum of %d to %d is %d ",x,end,sum);	
}