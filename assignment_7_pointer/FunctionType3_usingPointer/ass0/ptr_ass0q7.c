void hour(int*);
void main()
{
	int min=135;
    hour(&min);
}
void hour(int *m)
{
    int h=(*m) / 60;
    int rem_min=(*m)%60;
    printf("Hours:remaining minutes= %d:%d", h,rem_min);
}