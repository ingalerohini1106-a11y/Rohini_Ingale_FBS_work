float avg();
void main()
{
    float a;
    a = avg();
    printf("Average = %f", a);
}
float avg()
{
    int no1=10, no2=20, no3=30, no4=40, no5=50, sum;
	sum=no1+no2+no3+no4+no5;
	float avg=sum/5;
	return avg;
}