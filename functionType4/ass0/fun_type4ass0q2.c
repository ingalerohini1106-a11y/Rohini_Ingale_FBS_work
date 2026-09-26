float areacircle(float, float);
void main()
{
    float area = areacircle(3.14, 10);
    printf("Area = %.2f", area);
}

float areacircle(float pi, float r)
{
    return pi * r * r;
}