#include<stdio.h>
void vowel(char);
void main()
{
	char ch;
	printf("enter the character");
	scanf("%c",&ch);
	vowel(ch);
}
void vowel(char ch)
{
	if (ch=='a'||ch=='e'||ch=='o'||ch=='i'||ch=='u')
	{
	printf("the character is vowel");
}
	else
	printf("the character is not vowel");
}
