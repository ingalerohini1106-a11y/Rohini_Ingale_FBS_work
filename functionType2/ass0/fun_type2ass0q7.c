int hour();
int rem();
void main()
{
    int h,rem_min;
    h = hour();
    rem_min=rem();
    printf("Hours & remaining minutes= %d & %d", h,rem_min);
}
int hour()
{
    int min = 135;
    return min / 60;
}
int rem()
{
	int min=135;
	return min%60;
}