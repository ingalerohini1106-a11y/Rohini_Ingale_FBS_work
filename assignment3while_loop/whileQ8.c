void main()
{
    int n=145,temp,digit,i,fact,sum=0;

    temp=n;

    while(temp>0)
    {
        digit=temp%10;
        i=1;
        fact=1;

        while(i<=digit)
        {
            fact=fact*i;
            i++;
        }

        sum=sum+fact;
        temp=temp/10;
    }

    if(sum==n)
        printf("Strong");
    else
        printf("Not Strong");
}