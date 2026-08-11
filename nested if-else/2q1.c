void main()
{
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Enter operator (+,-,/,*,%%): ");
    scanf(" %c", &op);

    if(op == '+')
        printf("Result = %d", a + b);
    else if(op == '-')
        printf("Result = %d", a - b);
    else if(op == '*')
        printf("Result = %d", a * b);
    else if(op == '/')
        printf("Result = %d", a / b);
    else if(op == '%')
        printf("Result = %d", a % b);
    else
        printf("Invalid operator");
}