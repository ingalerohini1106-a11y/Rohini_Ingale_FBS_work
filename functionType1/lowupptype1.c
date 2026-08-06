void check();
void main()
{
	check();
}
void check()
{
	char ch;
	printf("Enter character:- ");
	scanf(" %c",&ch);

	if(ch>='A' && ch<='Z')
		printf("Uppercase");
	else
		printf("Lowercase");
}