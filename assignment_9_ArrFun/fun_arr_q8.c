void merge(int[],int[],int[],int,int);
void main()
{
    int arr[10],brr[10],crr[20];
    int n, m, i;
    printf("Enter size of first array: ");
    scanf("%d", &n);
    printf("Enter first array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
	}
    printf("\nEnter size of second array: ");
    scanf("%d",&m);
    printf("Enter second array:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&brr[i]);
    }
    merge(arr,brr,crr,n,m);
}
void merge(int arr[], int brr[], int crr[], int n, int m)
{
    int i;
    for(i=0;i<n;i++)
    {
        crr[i]=arr[i];
    }
    for(i=0;i<m;i++)
    {
        crr[n+i]=brr[i];
    }
    printf("\nMerged array:\n");
    for(i=0;i<n+m;i++)
    {
        printf("%d ",crr[i]);
    }
}