void factorial(int);
void main()
{
	int no;
	printf("Enter no : ");
	scanf("%d",&no);
	factorial(no);
}
void factorial(int no)
{
	int i=1,fact=1;
	while(i<=no)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial of %d is %d ",no,fact);
}