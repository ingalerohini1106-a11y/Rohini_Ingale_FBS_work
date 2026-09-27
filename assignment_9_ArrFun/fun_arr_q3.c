void sum(int[],int);
void main()
{
    int arr[10],n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
	}
    sum(arr,n);
}
void sum(int arr[], int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    printf("Sum = %d",s);
}