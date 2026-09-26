void ye(int*);
void main()
{
	int year=2026;
	ye(&year);	
}
void ye(int *leap)
{
	if((*leap)%4==0 && (*leap)%100!=0 || (*leap)%400==0)
		printf("Leap year");
	else
		printf("Not leap year");
}