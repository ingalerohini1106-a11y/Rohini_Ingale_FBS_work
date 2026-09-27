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
	printf("\nEven numbers = ");
    for(i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\nOdd numbers = ");
    for(i=0;i<5;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
        }
    }
}