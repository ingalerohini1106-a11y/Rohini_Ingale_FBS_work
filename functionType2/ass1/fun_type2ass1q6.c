int uppercase();
void main()
{
	int x=uppercase();
	if(x==1)
		printf("Uppercase");
	else
		printf("Lowercase");
}
int uppercase()
{
	char character='R';
	if(character>='A' && character<='Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}