void table();
void main()
{
	table();
}
void table()
{
	int n,i=1;
	printf("Enter number:- ");
	scanf("%d",&n);

	while(i<=10)
	{
		printf("%d ",n*i);
		i++;
	}
}