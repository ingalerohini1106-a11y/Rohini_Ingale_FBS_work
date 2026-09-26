void palindrome(int*);
void main()
{
	int n=838;
	palindrome(&n);	
}
void palindrome(int *no)
{
	int x1,q1,x2,x3;
	x1=(*no)%10;
	q1=(*no)/10;
	x2=q1%10;
	x3=q1/10;
	if(x1==x3)
		printf("Palindrome Number");
	else
		printf("not Palindrome Number");
}