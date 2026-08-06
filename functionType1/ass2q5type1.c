void discount();
void main()
{
	discount();
}
void discount()
{
	float price,dis,total;
	char ch;

	printf("Enter price:- ");
	scanf("%f",&price);

	printf("Are you student(y/n):- ");
	scanf(" %c",&ch);

	if(ch=='y' || ch=='Y')
	{
		if(price>500)
			dis=price*20/100;
		else
			dis=price*10/100;
	}
	else
	{
		if(price>600)
			dis=price*15/100;
		else
			dis=0;
	}

	total=price-dis;

	printf("Discount = %f\n",dis);
	printf("Total Price = %f",total);
}