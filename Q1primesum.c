void primeSum()
{
    int start, end, i, j, flag, sum = 0;
    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);
    for(i = start; i <= end; i++)
    {
        if(i < 2)
            continue;
        flag = 1;
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            printf("%d ", i);
            sum = sum + i;
        }
    }
    printf("\n prime numbers sum = %d", sum);
}
int main()
{
    primeSum();
    return 0;
}