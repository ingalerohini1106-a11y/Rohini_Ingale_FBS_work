int areatri(int,int);
void main()
{
    int area = areatri(8,6);
    printf("Area = %d", area);
}
int areatri(int b,int h)
{
    return (b*h)/2;
}