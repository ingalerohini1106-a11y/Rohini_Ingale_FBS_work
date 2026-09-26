int marks(int,int,int,int,int);
float percentage(int);
void main()
{
	int m= marks(80,65,99,78,83);
    float p = percentage(m);
    printf("Total marks is %d out of 500\n",m);
	printf("Percentage of 5 Subjects %f",p);
}
int marks(int s1,int s2,int s3,int s4,int s5)
{
	int total=s1+s2+s3+s4+s5;
	return total;
}
float percentage(int total)
{
    return (total / 500.0) * 100;
}