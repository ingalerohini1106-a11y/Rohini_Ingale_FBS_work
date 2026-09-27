void main()
{
	int arr[20],x,min,max;
	printf("Enter size: ");
	scanf("%d",&x);
	printf("Enter number: ");
	for(int i=0;i<x;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array = ");
	for(int i=0;i<x;i++)
	{
		printf("%d ",arr[i]);
	}
	min=max=arr[0];
	for(int i=1;i<x;i++)
	{
		if(arr[i]<min)
			min=arr[i];
		if(arr[i]>max)
			max=arr[i];
	}
	printf("\nMinimum=%d & Maximum=%d",min,max);
}