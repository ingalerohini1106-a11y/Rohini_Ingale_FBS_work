int square();
int cube();
void main()
{
    int sq,cu;
    sq = square();
    cu=cube();
    printf("Square & Cube = %d & %d", sq,cu);
}
int square()
{
    int no = 10;
    return no*no;
}
int cube()
{
    int no = 10;
    return no*no*no;
}