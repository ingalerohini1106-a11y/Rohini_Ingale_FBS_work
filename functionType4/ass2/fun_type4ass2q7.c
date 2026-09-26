int age(int);
void main()
{
	int ag;
	printf("Enter age : ");
	scanf("%d",&ag);
	int a=age(ag);
	if(a==1)
	{
		printf("Child person");
	}
	else if(a==2)
	{
		printf("Teenager person");
	}
	else if(a==3)
	{
		printf("Adult person");
	}
	else
	{
		printf("Senior person");
	}
}
int age(int ag)
{
	if(ag<12)
	{
		return 1;
	}
	else if(ag>=12 && ag<=19)
	{
		return 2;
	}
	else if(ag>=20 && ag<=59)
	{
		return 3;
	}
	else
	{
		return 0;
	}
}