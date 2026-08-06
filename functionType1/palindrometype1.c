void palindrome();
void main()
{
	palindrome();
}
void palindrome()
{
	int n,rev,a,b,c;
	printf("Enter a 3 digit number:- ");
	scanf("%d",&n);

	a=n/100;
	b=(n/10)%10;
	c=n%10;

	rev=c*100+b*10+a;

	if(n==rev)
		printf("Palindrome");
	else
		printf("Not Palindrome");
}