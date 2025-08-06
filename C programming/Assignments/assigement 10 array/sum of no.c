#include<stdio.h>
void main()
{
	int no[5];
	int sum=0;
for(int i=0;i<5;i++)
{
scanf("%d\n",&no[i]);
}
for(int i=0;i<5;i++)
 {
 	sum=sum+no[i];
    printf("the sum is%d\n",sum);
 }
}