void greater(int*,int*,int*);
void main()
{
	int x,y,z;
	printf("Enter x,y,z :");
	scanf("%d%d%d",&x,&y,&z);
	greater(&x,&y,&z);
}
void greater(int *a,int *b,int *c)
{
	
	if((*a)>(*b))
	{
		if((*a)>(*c))
			printf("Greatest number = %d", *a);
		else
			printf("Greatest number = %d", *c);
	}
	else
	{
		if((*b)>(*c))
			printf("Greatest number = %d", *b);
		else
			printf("Greatest number = %d", *c);
	}
}