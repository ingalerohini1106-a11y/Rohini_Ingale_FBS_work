void marks(int,int,int,int,int); 
void main()
{
	marks(80,95,75,64,99);
}
void marks(int s1, int s2, int s3, int s4, int s5)
{
	int total=s1+s2+s3+s4+s5;
	float per=(total / 500.0) * 100;
	printf("Total marks is %d out of 500\n",total);
	printf("Percentage of 5 Subjects %f",per);
}