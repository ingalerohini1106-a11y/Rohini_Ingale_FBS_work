int age();
void main()
{
	int a=age();
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
int age()
{
	int age;
	printf("Enter age : ");
	scanf("%d",&age);
	if(age<12)
	{
		return 1;
	}
	else if(age>=12 && age<=19)
	{
		return 2;
	}
	else if(age>=20 && age<=59)
	{
		return 3;
	}
	else
	{
		return 0;
	}
}