void square(int);
void main()
{
    square(20);
}
void square(int no)
{
    int sq= no*no;
    int cu= no*no*no;
    printf("Square & Cube = %d & %d", sq,cu);
}