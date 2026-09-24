int per();
void main()
{
    int p;
    p = per();
    printf("Perimeter = %d", p);
}
int per()
{
    int l = 10, w = 5;
    return 2 * (l + w);
}