float avg(int,int,int,int,int);
void main()
{
    float a = avg(10,20,30,40,50);
    printf("Average = %f", a);
}
float avg(int no1,int no2,int no3,int no4,int no5)
{
    int sum=no1+no2+no3+no4+no5;
	float avg=sum/5;
	return avg;
}