void convert();
void main()
{
	convert();
}
void convert()
{
	int min,hour,rem;
	printf("Enter minutes:- ");
	scanf("%d",&min);
	hour=min/60;
	rem=min%60;
	printf("Hours = %d\n",hour);
	printf("Minutes = %d",rem);
}