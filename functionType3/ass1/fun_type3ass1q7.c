void basic(int);
void main()
{
    basic(6500);
}
void basic(int basic)
{
	int da, ta, hra,salary;
	if(basic<=5000)
	{
		da=(10*basic)/100;
		ta=(20*basic)/100;
		hra=(25*basic)/100;
	}
	else
	{
		da=(15*basic)/100;
		ta=(25*basic)/100;
		hra=(30*basic)/100;
	}
	salary=basic+da+ta+hra;
    printf("Salary = %d", salary);
}