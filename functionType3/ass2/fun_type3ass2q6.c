void divisible(int);
void main()
{
	int number;
	printf("Enter the number : ");
	scanf("%d",&number);
	divisible(number);
}
void divisible(int number)
{
	if(number%3==0 && number%5==0)
		printf("Divisible by both");
	else if(number%3!=0 && number%5==0)
		printf("Divisible by 5 but not by 3");
	else if(number%3==0 && number%5!=0)
		printf("Divisible by 3 but not by 5");
	else
		printf("Divisible by None");
}