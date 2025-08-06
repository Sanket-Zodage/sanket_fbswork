

#include<stdio.h>
void main()
{
	int no[5];
	int even=0,odd=0;
	for(int i=0;i<5;i++)
	{
	scanf("%d",&no[i]);
    }

for(int i=0;i<5;i++)
{
   if(no[i]%2==0)
   even = even+1;
   else
   odd = odd+1;
}
printf("the even no are %d\n",even);
printf("the odd no are %d",odd);
   
}
 
