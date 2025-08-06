#include<string.h>
#include<stdio.h>
void main()
{
	 char str[]="'a','b','c','d','e','i','o'";
	 int count=0;
	 
	 for(int i=0;i<str[i];i++)
	 {
	 	if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
	 	count++;
	 }
	 printf("%d",count);
	 
	 
}