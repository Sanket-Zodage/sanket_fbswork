int leapyear();
void main()
{
	if (leapleapyear())
	printf("the year is leap");
	else 
	printf("the year is not leap");
}
int leapyear()
{
  int year=2004;
}
	if(year%4==0&&year%100!=0||year%400)
	{
	return 1;
    }
    else 
    {
    	return 0;
	}