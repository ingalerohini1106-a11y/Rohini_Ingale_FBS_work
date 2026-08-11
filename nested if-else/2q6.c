void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n % 3 == 0 && n % 5 == 0)
        printf("Divisible by both");
    else if(n % 3 == 0)
        printf("Divisible by 3 but not by 5");
    else if(n % 5 == 0)
        printf("Divisible by 5 but not by 3");
    else
        printf("Divisible by None");
}