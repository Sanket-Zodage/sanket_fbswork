int sum(int,int);
void main()
{
	int no1,no2;
	printf("enter a number");
	scanf("%d,%d",&no1,&no2);
	sum(no1,no2);	
}
int sum(int x,int y)
{
	int res;
	
	res=x+y;
	printf("the result %d",res);
}

