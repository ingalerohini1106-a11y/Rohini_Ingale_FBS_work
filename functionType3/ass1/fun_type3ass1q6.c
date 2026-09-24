void uppercase(char);
void main()
{
	uppercase('r');
}
void uppercase(char character)
{
	if(character>='A' && character<='Z')
		printf("Uppercase");
	else
		printf("Lowercase");
}