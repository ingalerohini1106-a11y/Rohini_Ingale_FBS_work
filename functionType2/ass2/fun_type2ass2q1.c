int calculator();
void main()
{
	int result = calculator();
    printf("Answer = %d", result);
}
int calculator()
{
	int no1,no2,op;
	printf("Enter no1 & no2 : ");
	scanf("%d%d",&no1,&no2);
	printf("Enter 1=add,2=sub,3=div,4=mul,5=mod: ");
	scanf("%d",&op);
	if(op == 1)
        return no1 + no2;
    else if(op == 2)
        return no1 - no2;
    else if(op == 3)
        return no1 / no2;
    else if(op == 4)
        return no1 * no2;
    else if(op == 5)
        return no1 % no2;
    else
    {
        printf("Invalid operator");
        return 0;
    }
}