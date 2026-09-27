void main()
{
	int arr[20],n;
	printf("Enter size: ");
	scanf("%d",&n);	
	printf("Enter elements: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}	
	printf("\nArray:");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nAlternate elements: ");
    for(int i=0;i<n;i=i+2)
    {
        printf("%d ",arr[i]);
    }
}