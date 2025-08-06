#include<stdio.h>
void main()
{
	int arr[5];
	int no;
	scanf("%d",no);
	int flag=1;
	for(int i=0;i<5;i++)
	{
	    if(arr[i]==no)
	    {
	    	flag=1;
		}
    }
    if (flag==0)
    printf("not found",flag);
    else
    printf("found");
}
	