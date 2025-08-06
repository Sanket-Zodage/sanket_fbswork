struct student
{
	int rollno;
	char name[23];
	int marks;
};
struct student storestudent();
void displaystudent(struct student stud);
	
void main()
{
	struct student s1,s2;
	s1=storestudent();
	s2=storestudent();
	
	displaystudent(s1);
	displaystudent(s2);
	
}
		void displaystudent(struct student stud)
	
	{
		printf("roll no %d,name %s,marks %d\n",stud.rollno,stud.name,stud.marks);
	}



 	struct student storestudent()
 {
 	struct student stud;
 
 	printf("enter the roll no,name and marks");
 	scanf("%d",&stud.rollno);
 	scanf("%s",&stud.name);
 	scanf("%d",&stud.marks);
 	

 	return stud;
 }

