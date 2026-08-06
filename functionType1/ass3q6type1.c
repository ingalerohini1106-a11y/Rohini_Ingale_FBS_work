void perfect();
void main()
{
	perfect();
}
void perfect()
{
	int n,i=1,sum=0;
	printf("Enter number:- ");
	scanf("%d",&n);

	while(i<n)
	{
		if(n%i==0)
			sum=sum+i;
		i++;
	}

	if(sum==n)
		printf("Perfect");
	else
		printf("Not Perfect");
}