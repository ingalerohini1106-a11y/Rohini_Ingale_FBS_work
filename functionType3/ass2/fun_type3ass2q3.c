void greater(int,int,int);
void main()
{
	int a,b,c;
	printf("Enter a,b,c :");
	scanf("%d%d%d",&a,&b,&c);
	greater(a,b,c);
}
void greater(int a,int b,int c)
{
	if(a>b)
	{
		if(a>c)
			printf("Greatest number = %d", a);
		else
			printf("Greatest number = %d", c);
	}
	else
	{
		if(b>c)
			printf("Greatest number = %d", b);
		else
			printf("Greatest number = %d", c);
	}
}