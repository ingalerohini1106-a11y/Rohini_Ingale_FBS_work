int per(int,int);
void main()
{
    int p= per(10,5);
    printf("Perimeter = %d", p);
}
int per(int l,int w)
{
    return 2 * (l + w);
}