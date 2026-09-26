void vote(int*);
void main()
{
	int ae=2;
	vote(&ae);	
}
void vote(int *age)
{
	if((*age)>=18)
		printf("eligible to vote");
	else
		printf("not eligible to vote");
}