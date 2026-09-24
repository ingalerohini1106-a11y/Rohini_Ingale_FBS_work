void discount(double,char);
void main()
{
    double price;
    char user;
    printf("Enter price :");
    scanf("%lf",&price);
    getchar();
    printf("You are student or not (y/n):");
    scanf("%c",&user);
    discount(price,user);
}
void discount(double price,char user)
{
    double dis=0,fp;
    if(user=='y' || user=='Y')
    {
        if(price>500)
        {
            dis=price*0.20;
            fp=price-dis;

            printf("You get discount of 20 percent\n");
            printf("Discount = %lf\n",dis);
        }
        else
        {
            dis=price*0.10;
            fp=price-dis;

            printf("You get discount of 10 percent\n");
            printf("Discount = %lf\n",dis);
        }
    }
    else
    {
        if(price>600)
        {
            dis=price*0.15;
            fp=price-dis;

            printf("You get discount of 15 percent\n");
            printf("Discount = %lf\n",dis);
        }
        else
        {
            dis=0;
            fp=price;

            printf("No discount\n");
            printf("Discount = %lf\n",dis);
        }
    }
    printf("\nFinal Price = %lf",fp);
}