char character(char);
void main()
{
	int x=character('g');
	if(x==1)
		printf("vowel");
	else
		printf("Consonant");
}
char character(char cha)
{
	if(cha=='a'|| cha=='e' || cha=='i' || cha=='o' || cha=='u')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}