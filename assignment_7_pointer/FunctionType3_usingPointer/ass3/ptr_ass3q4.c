void prime(int*);
void main() 
{
    int no;
    printf("Enter number: ");
    scanf("%d",&no);
    prime(&no);
}
void prime(int *n)
{
	int i=2,status=0;
	while(i<(*n))
	{
        if((*n)%i==0)
        {
            status=1;
		}
        i++;
    }
    if(status==0)
    {
        printf("Prime");
        printf("%d",i);
    }
	else
	{
        printf("Not Prime");
	}
}