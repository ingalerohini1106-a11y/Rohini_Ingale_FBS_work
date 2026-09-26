void square(int*);
void main()
{
	int n=20;
    square(&n);
}
void square(int *no)
{
    int sq= (*no)*(*no);
    int cu= (*no)*(*no)*(*no);
    printf("Square & Cube of %d= %d & %d",*no,sq,cu);
}