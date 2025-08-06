#include<string.h>
#include<stdio.h>
int stringlength(char str[]);
int main()
{
	char mystring[100];
	int length;
	printf("enter the string");
	scanf("%d",mystring);
    length=stringlength(mystring);
	printf("the length is %s is %d\n",mystring,length);
}
int stringlength(char str[])
{
	int i=0;
	int count=0;
	while(str[i]='\0')
	{

 		count++;
		i++;
    }
    return count;
}