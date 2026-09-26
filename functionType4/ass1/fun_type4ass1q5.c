int vote(int);
void main()
{
	int x=vote(20);
	if(x==1)
		printf("eligible to vote");
	else
		printf("not eligible to vote");
}
int vote(int age)
{
	if(age>=18)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}