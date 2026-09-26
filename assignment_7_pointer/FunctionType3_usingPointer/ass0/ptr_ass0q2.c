void areacircle(float*);
void main()
{
	float r=40;
    areacircle(&r);
}
void areacircle(float *radius)
{
    float pi=3.14;
    float area=pi * (*radius) * (*radius);
    printf("Area = %f",area);
}