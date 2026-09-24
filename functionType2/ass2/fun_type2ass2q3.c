int greater();
void main()
{
	int max = greater();
    printf("Greatest number = %d", max);
}
int greater()
{
	int a,b,c;
	printf("Enter a,b,c :");
	scanf("%d%d%d",&a,&b,&c);
	
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