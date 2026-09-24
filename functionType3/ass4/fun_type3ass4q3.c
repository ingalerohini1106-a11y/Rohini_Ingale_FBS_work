void perfect(int);
void main()
{
	int no;
    printf("Enter number: ");
    scanf("%d",&no);
    perfect(no);
}
void perfect(int no)
{
	for(int i=1;i<=no;i++)
    {
    	int sum=0;
    	for(int j=1;j<i;j++)
		{
		   if(i%j==0)
		      sum=sum+j;
		}
	    if(sum==i)
	    {
		    printf("%d ",i);
	    }
	}
}