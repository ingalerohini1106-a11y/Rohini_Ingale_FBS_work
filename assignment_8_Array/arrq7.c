void main()
{
	int arr[20],brr[20],crr[20],n;
	printf("Enter size for arr, brr, crr: ");
	scanf("%d",&n);
	
	printf("\nEnter 5 number arr: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter 5 number brr: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&brr[i]);
	}

	printf("Array crr= ");
	for(int i=0;i<n;i++)
	{
		crr[i]=arr[i]+brr[i];
		printf("%d ",crr[i]);
	}
}