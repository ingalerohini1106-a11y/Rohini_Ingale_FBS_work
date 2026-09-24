void hour(int);
void main()
{
    hour(135);
}
void hour(int min)
{
    int h=min / 60;
    int rem_min=min%60;
    printf("Hours:remaining minutes= %d:%d", h,rem_min);
}