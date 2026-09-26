void number(int*);
void main()
{
	int n=1;
	number(&n);
}
void number(int *no)
{
	while((*no)<=10)
	{
		printf("%d ", *no);
		(*no)++;
	}
}