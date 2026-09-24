void main()
{
    int n=500,i,temp,digit,sum;
    for(i=1;i<=n;i++)
    {
        temp=i;
        sum=0;

        while(temp>0)
        {
            digit=temp%10;
            sum=sum+(digit*digit*digit);
            temp=temp/10;
        }
        if(sum==i)
            printf("%d ",i);
    }
}