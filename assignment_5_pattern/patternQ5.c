void main()
{
    int n=5,i,j,k;

    for(i=n;i>=1;i--)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }

        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }

        printf("\n");
    }
}