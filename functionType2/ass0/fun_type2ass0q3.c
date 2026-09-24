float temp();
void main()
{
    float F;
    F=temp();
    printf("Fahrenheit = %.2f", F);
}
float temp()
{
    float C=10;
    return (C*9/5)+32;
}