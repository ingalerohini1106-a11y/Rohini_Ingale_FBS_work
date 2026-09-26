void character(char *);
void main()
{
	char ch='k';
	character(&ch);
}
void character(char *charact)
{
	if((*charact)=='a'|| (*charact)=='e' || (*charact)=='i' || (*charact)=='o' || (*charact)=='u')
		printf("vowel");
	else
		printf("Consonant");
}