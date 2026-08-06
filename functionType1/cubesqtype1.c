void squarecube();
void main()
{
	squarecube();
}
void squarecube()
{
	int n,square,cube;
	printf("Enter number:- ");
	scanf("%d",&n);
	square=n*n;
	cube=n*n*n;
	printf("Square = %d\n",square);
	printf("Cube = %d",cube);
}