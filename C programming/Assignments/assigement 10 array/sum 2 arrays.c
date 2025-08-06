#include<stdio.h>
void main()
{
	int a[5];
	int b[5];
	int sum[5];
	
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
}
	for(int i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	
	for(int i=0;i<5;i++)
	{
		sum[i]=a[i]+b[i];
		printf("the sum of arays is %d",sum[i]);
	}
}