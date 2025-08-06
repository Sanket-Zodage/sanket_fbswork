#include<stdio.h>
void main()
{
	int i;
	int a[5];
	printf("enter the element");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		
	}   
	for(i=0;i<5;i++) 
	{ 
	printf("the array is %d\n",a[i]);
}
     int max=a[0];
	for(int i=0;i<10;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("\n maximum num of array is %d",max);
}