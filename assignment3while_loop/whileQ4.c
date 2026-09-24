void main()
{
    int n=7,i=2,flag=0;
    
    while(i<n)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        i++;
    }

    if(flag==0)
        printf("Prime");
    else
        printf("Not Prime");
}
