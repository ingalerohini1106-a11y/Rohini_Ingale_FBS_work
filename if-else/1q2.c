void main()
{
    int n, rev, rem, temp;

    printf("Enter a 3 digit number: ");
    scanf("%d",&n);

    temp=n;
    rev=0;

    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }

    if(temp==rev)
        printf("Number is Palindrome");
    else
        printf("Number is Not Palindrome");
}