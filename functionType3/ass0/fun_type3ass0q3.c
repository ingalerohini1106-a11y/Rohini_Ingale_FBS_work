void temp(float);
void main()
{
    temp(10);
}
void temp(float C)
{
    float F=(C*9/5)+32;
    printf("Fahrenheit = %.2f", F);
}