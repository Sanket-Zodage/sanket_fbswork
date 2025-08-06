struct date
{
	int date;
	char month[20];
	int year;
};
void main()
{
	struct date s1;
	printf("enter the date, year ,and month")
	scanf("%d",&s1.date);
	scanf("%d",&s1.year);
	scanf("%d",&s1.month);
	{
		printf("enter the date %d,enter the month %s,enter month",s1.date,s1.year,s1.month);
	}
}