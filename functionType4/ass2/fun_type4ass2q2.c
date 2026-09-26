int tri(int,int,int);
void main()
{
	int s1,s2,s3;
	printf("Enter Side1, Side2 & Side3 : ");
	scanf("%d%d%d",&s1,&s2,&s3);
	int side=tri(s1,s2,s3);
	if(side==1)
		printf("Triangle is Equilateral");
	else if(side==2)
		printf("Triangle is Isosceles");
	else
		printf("Triangle is Scalene");
}
int tri(int s1,int s2,int s3)
{
	if(s1==s2 && s1==s3 && s2==s3)
	{
		return 1;
	}
	else if(s1==s2 || s1==s3 || s2==s3)
	{
		return 2;
	}
	else
	{
		return 0;
	}
}