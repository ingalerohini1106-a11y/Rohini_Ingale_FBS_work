void addarray(int[],int[],int[],int);
void main()
{
    int arr[10],brr[10],crr[10];
    int n, i;
    printf("Enter size of arrays: ");
    scanf("%d",&n);
    printf("\nEnter first array arr[]:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
	}
    printf("\nEnter second array brr[]:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&brr[i]);
	}
    addarray(arr,brr,crr,n);
}
void addarray(int arr[],int brr[],int crr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        crr[i]=arr[i]+brr[i];
    }
    printf("\nThird array crr[]:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",crr[i]);
    }
}