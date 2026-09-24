void main()
{
    int n=121,temp,digit,rev=0;

    temp=n;

    while(temp>0)
    {
        digit=temp%10;
        rev=rev*10+digit;
        temp=temp/10;
    }

    if(rev==n)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}