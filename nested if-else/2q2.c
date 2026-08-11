void main()
{
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a == b && b == c)
        printf("Equilateral Triangle");
    else if(a == b || b == c || a == c)
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");
}