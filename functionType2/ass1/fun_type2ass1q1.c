int evenodd();
void main()
{
	int x=evenodd();
	if(x==1)
		printf("even");
	else
		printf("odd");
}
int evenodd()
{
	int no=6;
	if(no%2==0)
		return 1;
	else
		return 0;
}