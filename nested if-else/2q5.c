void main()
{
    float price, discount, finalprice;
    char ch;

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &ch);

    if(ch == 'y')
    {
        if(price > 500)
            discount = price * 20 / 100;
        else
            discount = price * 10 / 100;
    }
    else
    {
        if(price > 600)
            discount = price * 15 / 100;
        else
            discount = 0;
    }

    finalprice = price - discount;

    printf("Discount = %.2f\n", discount);
    printf("Final Price = %.2f", finalprice);
}