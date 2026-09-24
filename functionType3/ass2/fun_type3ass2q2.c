void tri(int,int,int);
void main()
{
	int s1,s2,s3;
	printf("Enter Side1, Side2 & Side3 : ");
	scanf("%d%d%d",&s1,&s2,&s3);
	tri(s1,s2,s3);
}
void tri(int s1,int s2,int s3)
{
	if(s1==s2 && s1==s3 && s2==s3)
		printf("Triangle is Equilateral");
	else if(s1==s2 || s1==s3 || s2==s3)
		printf("Triangle is Isosceles");
	else
		printf("Triangle is Scalene");
}