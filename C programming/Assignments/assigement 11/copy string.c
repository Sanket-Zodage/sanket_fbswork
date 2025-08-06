void main()
{
	char str[30]="firstbitsollution";
	char temp[30];
	
	printf("str is %s",str);
	printf("temp is %s",temp);
	
	strcpy (temp,str);
	
	printf("\n after a copy");
	printf("\nstr is %s",str);
	printf("\ntemp is %s",temp);
}