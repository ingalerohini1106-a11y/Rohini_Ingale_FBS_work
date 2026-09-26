int hour(int);
int rem(int);
void main()
{
    int h,rem_min;
    h = hour(135);
    rem_min=rem(135);
    printf("Hours & remaining minutes= %d : %d", h,rem_min);
}
int hour(int min)
{
    return min / 60;
}
int rem(int min)
{
	return min%60;
}