void areatri(int*,int*);
void main()
{
	int b=8,h=5;
    areatri(&b,&h);
}
void areatri(int *bre,int *hig)
{
    int area=((*bre)*(*hig))/2;
    printf("Area = %d", area);
}