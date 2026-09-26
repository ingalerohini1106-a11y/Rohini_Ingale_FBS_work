void uppercase(char *);
void main()
{
	char character='r';
	uppercase(&character);
}
void uppercase(char *charact)
{
	if(*charact>='A' && *charact<='Z')
		printf("Uppercase");
	else
		printf("Lowercase");
}