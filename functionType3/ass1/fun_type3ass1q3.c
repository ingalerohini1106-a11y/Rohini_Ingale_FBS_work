void year (int);
void main()
{
	year(2026);	
}
void year(int year)
{
	if(year%4==0 && year%100!=0 || year%400==0)
		printf("Leap year");
	else
		printf("Not leap year");
}