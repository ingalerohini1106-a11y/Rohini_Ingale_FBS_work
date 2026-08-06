void marks();
void main()
{
	marks();
}
void marks()
{
	int m1,m2,m3,m4,m5,total;
	float per;
	printf("Enter marks of five subjects:- ");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	total=m1+m2+m3+m4+m5;
	per=total/5.0;
	printf("Total = %d\n",total);
	printf("Percentage = %f",per);
}