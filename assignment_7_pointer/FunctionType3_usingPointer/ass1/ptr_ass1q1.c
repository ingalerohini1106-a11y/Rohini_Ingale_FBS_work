void evenodd(int*);
void main()
{
	int n=8;
	evenodd(&n);	
}
void evenodd(int *no)
{
	if((*no)%2==0)
		printf("even");
	else
		printf("odd");
}