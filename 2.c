#include<stdio.h>
int main()
{
	char ch;
	printf("Enter an alphabet: ");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("It is a vowel.");
	}
	else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	{
		printf("It is a vowel.");
	}
	else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		printf("It is a consonant.");
	}
	else
	{
		printf("Invalid Character.");
	}
	return 0;
}