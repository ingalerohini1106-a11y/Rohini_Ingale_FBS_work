int greater(int,int,int);
void main()
{
	int a,b,c;
	printf("Enter a,b,c :");
	scanf("%d%d%d",&a,&b,&c);
	int max = greater(a,b,c);
    printf("Greatest number = %d", max);
}
int greater(int a,int b,int c)
{
	if(a>b)
	{
		if(a>c)
		{
			return a;
		}
		else
		{
			return c;
		}
	}
	else
	{
		if(b>c)
		{
			return b;
		}
		else
		{
			return c;
		}
	}
}