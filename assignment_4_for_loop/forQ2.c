void main()
{
    int n=20,i,j,flag;

    for(i=2;i<=n;i++)
    {
        flag=0;

        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
            printf("%d ",i);
    }
}