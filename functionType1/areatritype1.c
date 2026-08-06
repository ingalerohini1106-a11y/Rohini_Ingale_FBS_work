void triangle();
void main()
{
	triangle();
}
void triangle()
{
	float base,hight,area;
	printf("Enter base and height:- ");
	scanf("%f%f",&base,&hight);
	area=0.5*base*hight;
	printf("%f",area);
}