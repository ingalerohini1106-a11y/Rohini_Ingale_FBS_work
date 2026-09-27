void oddeven(int[],int);
void main()
{
    int arr[10],n,i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
	}
    oddeven(arr,n);
}
void oddeven(int arr[], int n)
{
    int i;
    printf("Even numbers:\n");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\nOdd numbers:\n");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
        }
    }
}