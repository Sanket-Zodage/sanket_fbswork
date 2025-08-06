#include<stdio.h>
int evenodd();
void main()
{
	if (evenodd())
	printf("the number is even ");
	else
	printf("the number is odd");
}
  int evenodd()
{
	int no=7;
	if(no%2==0)
	{
		return 1;
	}
	else 
	{
	 return 0;
}
}