void search(int[], int, int);
void main()
{
    int arr[10],n,i,num;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter number to search: ");
    scanf("%d",&num);
    search(arr,n,num);
}
void search(int arr[], int n, int num)
{
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("Number found");
    else
        printf("Number not found");
}