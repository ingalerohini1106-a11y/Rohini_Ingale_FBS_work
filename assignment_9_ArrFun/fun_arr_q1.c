void maxmin(int[],int);
void main()
{
	int arr[20],n;
	printf("Enter size: ");
	scanf("%d",&n);
	printf("Enter number: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array = ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	maxmin(arr,n);
}
void maxmin(int arr[], int n)
{
	int min,max;
	min=max=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("\nMinimum=%d & Maximum=%d",min,max);
}