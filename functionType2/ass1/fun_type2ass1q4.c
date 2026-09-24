int character();
void main()
{
	int x=character();
	if(x==1)
		printf("vowel");
	else
		printf("Consonant");
}
int character()
{
	char character='g';
	if(character=='a'|| character=='e' || character=='i' || character=='o' || character=='u')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}