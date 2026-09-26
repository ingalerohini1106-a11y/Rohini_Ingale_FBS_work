#include <stdio.h>
void discount(double*,char*);
void main()
{
	double pri;
	char ur;
	printf("Enter price :");
	scanf("%lf",&pri);
	
	fflush(stdin);
	
	printf("Your are student or not (y/n):");
	scanf("%c", &ur);
	discount(&pri,&ur);
}
void discount(double *price, char *user)
{
	double dis,fp;
	if((*user)=='y'|| (*user) == 'Y')
	{
		if((*price)>500)
		{
			dis=(*price)*0.20;
			fp=(*price)-dis;
			printf("You get discount of 20percent");
			printf("Discount = %lf\n", dis);
		}
		else
		{
			dis=(*price)*0.10;
			fp=(*price)-dis;
			printf("You get discount of 10percent");
			printf("Discount = %lf\n", dis);
		}
	}
	else
	{
		if((*price)>600)
		{
			dis=(*price)*0.15;
			fp=(*price)-dis;
			printf("You get discount of 15percent");
			printf("Discount = %lf\n", dis);
		}
		else
		{
			printf("No discount");
			printf("Discount = %lf\n", dis);
		}
	}
	printf("\nFinal Price = %lf", fp);
}