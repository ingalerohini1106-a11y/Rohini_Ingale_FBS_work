void sum(int*);
void main()
{
	int n;
	printf("Enter no : ");
	scanf("%d",&n);
	sum(&n);
}
void sum(int *no)
{
	int r1,r2,temp=(*no),sum=0;
	r1=(*no)%10;
	while((*no)>=1)
	{
		r2=(*no)%10;
		(*no)=(*no)/10;
	}
	sum=r1+r2;
	printf("Sum(%d) of 1st number(%d) and last number(%d) is %d",temp,r2,r1,sum);
}