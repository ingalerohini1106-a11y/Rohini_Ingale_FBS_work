int evenodd(int);
void main()
{
	int x=evenodd(6);
	if(x==1)
		printf("even");
	else
		printf("odd");
}
int evenodd(int no)
{
	if(no%2==0)
		return 1;
	else
		return 0;
}