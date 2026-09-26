int divisible(int);
void main()
{
	int number;
	printf("Enter the number : ");
	scanf("%d",&number);
	int div= divisible(number);
	if(div==1)
	{
		printf("Divisible by both");
	}
	else if(div==2)
	{
		printf("Divisible by 5 but not by 3");
	}
	else if(div==3)
	{
		printf("Divisible by 3 but not by 5");
	}
	else
	{
		printf("Divisible by None");
	}
}
int divisible(int number)
{
	if(number%3==0 && number%5==0)
	{
		return 1;
	}
	else if(number%3!=0 && number%5==0)
	{
		return 2;
	}
	else if(number%3==0 && number%5!=0)
	{
		return 3;
	}
	else
	{
		return 0;
	}
}