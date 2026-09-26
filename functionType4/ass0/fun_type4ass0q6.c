int square(int);
int cube(int);
void main()
{
    int sq,cu;
    sq = square(10);
    cu=cube(10);
    printf("Square & Cube = %d & %d", sq,cu);
}
int square(int no)
{
    return no*no;
}
int cube(int no)
{
    return no*no*no;
}