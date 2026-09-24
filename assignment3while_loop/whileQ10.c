void main()
{
    int n=12345,temp,first,last,sum;

    temp=n;
    last=n%10;

    while(temp>=10)
    {
        temp=temp/10;
    }

    first=temp;
    sum=first+last;

    printf("%d",sum);
}