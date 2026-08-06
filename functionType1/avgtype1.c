void average();
void main()
{
	average();
}
void average()
{
	int a,b,c,d,e,sum;
	float avg;
	printf("Enter five numbers:- ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	avg=sum/5.0;
	printf("%f",avg);
}