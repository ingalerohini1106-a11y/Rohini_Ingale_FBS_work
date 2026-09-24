double discount();
void main()
{
	double fp = discount();
    printf("\nFinal Price = %lf", fp);
}
double discount()
{
	double price,dis,fp;
	char user;
	printf("Enter price :");
	scanf("%lf",&price);
	printf("Your are student or not (y/n):");
	scanf(" %c", &user);
	if(user=='y')
	{
		if(price>500)
		{
			dis=price*0.20;
			fp=price-dis;
			printf("You get discount of 20percent");
			printf("Discount = %lf\n", dis);
		}
		else
		{
			dis=price*0.10;
			fp=price-dis;
			printf("You get discount of 10percent");
			printf("Discount = %lf\n", dis);
		}
	}
	else
	{
		if(price>600)
		{
			dis=price*0.15;
			fp=price-dis;
			printf("You get discount of 15percent");
			printf("Discount = %lf\n", dis);
		}
		else
		{
			printf("No discount");
			printf("Discount = %lf\n", dis);
		}
	}
	return fp;
}