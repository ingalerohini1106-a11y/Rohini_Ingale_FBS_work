void vote(int);
void main()
{
	vote(20);	
}
void vote(int age)
{
	if(age>=18)
		printf("eligible to vote");
	else
		printf("not eligible to vote");
}