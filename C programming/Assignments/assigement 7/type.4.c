#include<stdio.h>
int evenodd();
void main()
{
	int no;
	printf("enter the number");
	scanf("%d",&no);
	
	  int res=evenodd(no);
	  if(res==1)
	  printf("the number is even");
	  else
	  printf("the no is odd");
}
int evenodd(num)
{

	if(num%2==0)
	{
		return  1;
	}
	else
	{
		return 0;
	}
}
