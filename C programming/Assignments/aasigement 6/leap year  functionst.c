void leapyear();
void main()
{
	void leapyear();
}
    void leapyear()
{
	int year;
	printf("enter the leap year");
	scanf("%d",&year);
	if(year%4==0&&year%100!=0||year%400)
	{
	printf("the year is leap year");
}
	else
	printf("the year is not leap");
}