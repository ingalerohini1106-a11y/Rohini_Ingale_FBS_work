void armstrong(int*);
void main() 
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    armstrong(&n);
}
void armstrong(int *no)
{
	int temp,rem,sum=0;
	temp=*no;
    while((*no)>0) 
	{
        rem=(*no)%10;
        sum=sum+(rem*rem*rem);
        (*no)=(*no)/10;
    }
    if(sum==temp)
    {
        printf("Armstrong");
    }
	else
	{
        printf("Not Armstrong");
    }
}