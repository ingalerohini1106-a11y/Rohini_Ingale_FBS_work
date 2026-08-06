void vote();
void main()
{
	vote();
}
void vote()
{
	int age;
	printf("Enter age:- ");
	scanf("%d",&age);

	if(age>=18)
		printf("Eligible for Vote");
	else
		printf("Not Eligible for Vote");
}