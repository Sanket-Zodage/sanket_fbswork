int upparcase();
void main()
{
	if (upparcase())
	{
	printf("the charater is upparcase");
}
else
{
	printf("charcter is lowercase");
}
	
}
int upparcase()
{
	char  ch;
	printf("enter the character");
	scanf("%d",ch);
	if(ch=='A'&&ch=='a')
	{
		return 0 ;
	}
	else
	{
		return 1 ;
	}
}
