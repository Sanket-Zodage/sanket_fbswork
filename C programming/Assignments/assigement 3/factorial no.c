void main ()
{
	int no=6,i=2,flag=0;
	
	while(no>i)
	{
		if (no%i==0)
		flag=0;
		i++;
	}
	if(flag==0)
	printf("the no is factorial");
	else
	printf("the is factorial");
}