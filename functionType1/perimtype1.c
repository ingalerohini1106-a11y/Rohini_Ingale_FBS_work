void perimeter();
void main()
{
	perimeter();
}
void perimeter()
{
	int len,wid,peri;
	printf("Enter length and width:- ");
	scanf("%d%d",&len,&wid);
	peri=2*(len+wid);
	printf("Perimeter = %d",peri);
}