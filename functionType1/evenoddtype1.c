void evenodd();
void main()
{
	evenodd();
}
void evenodd()
{
	int n;
	printf("Enter a number:- ");
	scanf("%d",&n);

	if(n%2==0)
		printf("Even");
	else
		printf("Odd");
}