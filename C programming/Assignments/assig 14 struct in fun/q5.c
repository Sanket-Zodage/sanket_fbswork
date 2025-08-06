struct date
{
	int date;
	char month[10];
	int year;
}
struct date storedate()
void main()
{
	struct date s1,s2;
	s1=storedate(); //function  call
	s2=storedate
	
	displaydate(s1);
	displaydate(s2);


	
	void displaydate(struct date stud)
	{
		printf("date is %d ,month is %s,year is %d",stud.date,stud.month,stud.year);
	}
	

}
struct date storedate()
{
	struct date stud;
	printf("enter the date month and year");
	Scanf("%d",&stud.date);
	Scanf("%s",&stud.month);
	Scanf("%d",&stud.year);
	
	return stud;
}