void palindrome(int*);
void main()
{
    int no;
    printf("Enter a number: ");
    scanf("%d",&no);
    palindrome(&no);
}
void palindrome(int *n)
{
	int temp=*n,rem,rev= 0;
	while((*n)>0)
    {
        rem=(*n)%10;
        rev=rev*10+rem;
        (*n)=(*n)/10;
    }
    if(temp==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}