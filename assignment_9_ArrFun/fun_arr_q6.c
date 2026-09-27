void prime(int[],int);
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
    prime(arr,n);
}
void prime(int arr[],int n)
{
    int i,j,flag;
    printf("Prime numbers:\n");
    for(i=0;i<n;i++)
    {
        flag=1;
        if(arr[i]<2)
        {
            flag=0;
        }
        else
        {
            for(j=2;j<arr[i];j++)
            {
                if(arr[i]%j==0)
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1)
        {
            printf("%d ",arr[i]);
        }
    }
}