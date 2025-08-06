void no(int)
void main();
{
	int  age;
	printf("enter the age");
	scanf("%d",&age);
	age(age);
}
void no(int age)
{
	int age=94;
	if(age<12)
	printf("the person is child");
	else if (age<19)
	printf("the person is teenger");
	else if(age<59)
	printf("the person is adult");
	else 
	printf("the person is above");
}