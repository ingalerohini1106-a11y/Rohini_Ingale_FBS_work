void strong(int);
void main() 
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    strong(n);
}
void strong(int n)
{
	int temp=n,rem,sum=0;
    while(n>0) 
	{
        rem=n%10;
        int fact=1,i=1;
        while(i<=rem) 
		{
            fact=fact*i;
            i++;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("Strong");
    }
	else
    {
	    printf("Not Strong");
	}
}