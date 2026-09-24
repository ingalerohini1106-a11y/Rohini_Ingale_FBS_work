void grade(int);
void main()
{
	int marks;
	printf("Enter Marks : ");
	scanf("%d",&marks);
	grade(marks);
}
void grade(int marks)
{
	if(marks>75)
	    printf("Distinction");
	else if(marks<=75 && marks>65)
	    printf("First Class");
	else if(marks<=65 && marks>55)
	    printf("Second Class");
	else if(marks<=55 && marks>=40)
	    printf("Pass Class");
	else
	    printf("Fail");
}