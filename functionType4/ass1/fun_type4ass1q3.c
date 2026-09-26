int year (int);
void main()
{
	int x=year(2024);
	if(x==1)
		printf("Leap year");
	else
		printf("Not leap year");
}
int year(int year)
{
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}