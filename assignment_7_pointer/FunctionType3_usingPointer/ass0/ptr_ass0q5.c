void avg(int*,int*,int*,int*,int*);
void main()
{
	int no1=10,no2=20,no3=30,no4=40,no5=50;
    avg(&no1,&no2,&no3,&no4,&no5);
}
void avg(int *n1,int *n2,int *n3,int *n4,int *n5)
{
    int sum=(*n1)+(*n2)+(*n3)+(*n4)+(*n5);
	float avg=sum/5;
	printf("Average = %f", avg);
}