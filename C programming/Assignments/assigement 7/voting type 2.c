int age();
void main()
{
	if (age())
	{
		printf("eligible for voting");
	}
	else 
	{
		printf("not elligible for voting");
	}
}
int age()
{
	int age=44;
	if(age>=18)
	{
		return 1;
	}
	else 
	{
	return 0;
}
}