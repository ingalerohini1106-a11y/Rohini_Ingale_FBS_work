int year ();
void main()
{
	int x=year();
	if(x==1)
		printf("Leap year");
	else
		printf("Not leap year");
}
int year()
{
	int year=2024;
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}