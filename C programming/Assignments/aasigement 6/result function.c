void result();
void main()
{
	result();
}
void result()
{
	int marks;
	printf("enter the marks");
	scanf("%d",&marks);
	if(marks>=75)
	printf("the marks is distinction");
		else if(marks>=65)
		printf("the marks is first class");
		else if(marks>=55)
		printf("the marks is second class");
		else if(marks>=40)
		printf("the marks is pass class");
		else
		printf("result show fail");
}