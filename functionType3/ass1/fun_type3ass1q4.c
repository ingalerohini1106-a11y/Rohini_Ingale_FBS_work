void character(char);
void main()
{
	character('k');
}
void character(char ch)
{
	if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u')
		printf("vowel");
	else
		printf("Consonant");
}