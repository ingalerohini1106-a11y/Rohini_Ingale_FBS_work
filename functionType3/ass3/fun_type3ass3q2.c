void tables(int);
void main()
{
	int no;
	printf("Enter no : ");
	scanf("%d",&no);
	tables(no);
}
void tables(int no)
{
	int i=1;
	while(i<=10)
	{
		int table=no*i;
		printf("%d ",table);
		i++;
	}
}