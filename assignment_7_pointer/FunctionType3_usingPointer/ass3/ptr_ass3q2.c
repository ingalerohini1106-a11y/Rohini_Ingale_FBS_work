void tables(int*);
void main()
{
	int n;
	printf("Enter no : ");
	scanf("%d",&n);
	tables(&n);
}
void tables(int *no)
{
	int i=1;
	while(i<=10)
	{
		int table=(*no)*i;
		printf("%d ",table);
		i++;
	}
}