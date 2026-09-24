void main()
{
    int n=28,i=1,sum=0;

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