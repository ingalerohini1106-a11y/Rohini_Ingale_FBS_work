int vote();
void main()
{
	int x=vote();
	if(x==1)
		printf("eligible to vote");
	else
		printf("not eligible to vote");
}
int vote()
{
	int age=20;
	if(age>=18)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}