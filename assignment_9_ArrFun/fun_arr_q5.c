void alternate(int[],int);
void main()
{
    int arr[10],n,i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
	}
    alternate(arr,n);
}
void alternate(int arr[],int n)
{
    int i;
    printf("Alternate elements:\n");
    for(i=0;i<n;i=i+2)
    {
        printf("%d ",arr[i]);
    }
}