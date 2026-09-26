char uppercase(char);
void main()
{
	int x=uppercase('R');
	if(x==1)
		printf("Uppercase");
	else
		printf("Lowercase");
}
char uppercase(char character)
{
	if(character>='A' && character<='Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}