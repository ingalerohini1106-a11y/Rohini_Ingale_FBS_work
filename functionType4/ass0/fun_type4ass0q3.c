float temp(float);
void main()
{
    float F=temp(10);
    printf("Fahrenheit = %.2f", F);
}
float temp(float C)
{
    return (C*9/5)+32;
}