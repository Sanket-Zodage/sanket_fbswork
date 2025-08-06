struct student
{
	int rollno;
	char name[20];
	int marks;
};
 void main()
 {
 	struct student s1,s2;
 	printf("enter the roll no,name,marks of student :");
 	scanf("%d",&s1.rollno);
 	scanf("%s",&s1.name);
 	scanf("%d",&s1.marks);
 	printf("enter the roll no,name,marks of student :");
 	scanf("%d",&s2.rollno);
 	scanf("%s",&s2.name);
 	scanf("%d",&s2.marks);
 	{
	printf("\nroll no %d,name %s,marks %d",s1.rollno,s1.name,s1.marks);
 	printf("\nroll no %d,name %s,marks %d",s2.rollno,s2.name,s2.marks);
 	
	 }
 }