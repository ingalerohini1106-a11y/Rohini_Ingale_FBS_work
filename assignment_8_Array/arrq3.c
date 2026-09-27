void main()
{
	int arr[5],i,sum=0;;
	printf("Enter 5 number: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("Array = ");
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nSum of array : %d",sum);
}