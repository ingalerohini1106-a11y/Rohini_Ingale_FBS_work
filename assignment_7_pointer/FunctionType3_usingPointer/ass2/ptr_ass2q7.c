void age(int*);
void main()
{
	int ae;
	printf("Enter age : ");
	scanf("%d",&ae);
	age(&ae);
}
void age(int *a)
{
	if((*a)<12)
	{
		printf("Child person");
	}
	else if((*a)>=12 && (*a)<=19)
	{
		printf("Teenager person");
	}
	else if((*a)>=20 && (*a)<=59)
	{
		printf("Adult person");
	}
	else
	{
		printf("Senior person");
	}
}