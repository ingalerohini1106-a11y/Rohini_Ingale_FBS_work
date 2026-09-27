void main()
{
	int arr[5],i;
	printf("Enter 5 number: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array = ");
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nPrime numbers = ");
    for(i=0;i<5;i++)
    {
        int flag=1;

        if(arr[i]<=1)
        {
            flag=0;
        }
        else
        {
            for(int j=2;j<arr[i];j++)
            {
                if(arr[i]%j==0)
                {
                    flag=0;
                    break;
                }
            }
        }

        if(flag==1)
        {
            printf("%d ",arr[i]);
        }
    }
}