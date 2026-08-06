void sum();
void main()
{
	sum();
}
void sum()
{
	int start,end,s=0;
	printf("Enter start and end:- ");
	scanf("%d%d",&start,&end);

	while(start<=end)
	{
		s=s+start;
		start++;
	}
	printf("Sum = %d",s);
}