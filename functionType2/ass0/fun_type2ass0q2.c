float areacircle();
void main()
{
    float area;
    area=areacircle();
    printf("Area = %.2f",area);
}
float areacircle()
{
    float pi=3.14,r=10;
    return pi*r*r;
}