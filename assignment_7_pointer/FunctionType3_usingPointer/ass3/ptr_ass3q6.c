void perfect(int*);
void main() 
{
    int no;
    printf("Enter number: ");
    scanf("%d",&no);
    perfect(&no);
}
void perfect(int *n)
{
	int i=1,sum=0;
	while(i<(*n)) 
	{
        if((*n)%i==0)
            sum=sum+i;
        i++;
    }
    if(sum==(*n))
    {
	    printf("Perfect");
    }
	else
    {
        printf("Not Perfect");
	}
}