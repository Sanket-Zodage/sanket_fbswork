#include<stdio.h>
int pallindrome(int num);
void main()
{
	int num,r1,r2,r3,q1,rev;
	printf("enter the number");
	scanf("%d",&num);
	int res=pallindrome(num);
	if (res==1)
	printf("the no is pallindrome");
	else 
	printf("the no is not pallindrome");
	
}
int pallindrome(int no)
{
 int r1,r2,r3,q1,rev;
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	r3=q1/10;
	rev=r1*100+r2*10+r3;
	if (rev==no)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}