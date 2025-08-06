void main()
{
	int arr[]={1,2,3,4,5};
	int i,temp,n=5;
	for(  i=0;i<2;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
		
	}
