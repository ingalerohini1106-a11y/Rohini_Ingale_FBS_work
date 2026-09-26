void temp(float*);
void main()
{
	float C=10;
    temp(&C);
}
void temp(float *Cel)
{
    float F=((*Cel)*9/5)+32;
    printf("Fahrenheit = %.2f", F);
}