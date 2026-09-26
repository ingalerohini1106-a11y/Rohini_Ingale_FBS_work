void calculator(int*,int*,int*);
void main()
{
	int n1,n2,oper;
	printf("Enter no1 & no2 : ");
	scanf("%d%d",&n1,&n2);
	printf("Enter 1=add,2=sub,3=div,4=mul,5=mod: ");
	scanf("%d",&oper);
	calculator(&n1,&n2,&oper);
}
void calculator(int *no1, int *no2, int *op)
{
	int result;
	if(*op == 1)
    {   
		result= (*no1) + (*no2);
        printf("Addition = %d", result);
    }
	else if(*op == 2)
	{
        result= (*no1) - (*no2);
        printf("Substraction = %d", result);
    }
	else if(*op == 3)
	{
        result= (*no1) / (*no2);
        printf("Division = %d", result);
    }
	else if(*op == 4)
	{
        result= (*no1) * (*no2);
        printf("Multiplication = %d", result);
    }
	else if(*op == 5)
    {
        result= (*no1) % (*no2);
        printf("Mod = %d", result);
    }
	else
    {
        printf("Invalid operator");
    }
}