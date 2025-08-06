struct employ
{
	int id;
	char name[23];
	int salary;
};
struct employ storeemploy();
void displayemploy(struct employ stud);
	
void main()
{
	struct employ s1,s2;
	s1=storeemploy();
	s2=storeemploy();
	
	displayemploy(s1);
	displayemploy(s2);
	
}
		void displayemploy(struct employ stud)
	
	{
		printf("id %d,name %s,salary %d\n",stud.id,stud.name,stud.salary);
	}



 	struct employ storeemploy()
 {
 	struct employ stud;
 
 	printf("enter the id no,name and salary");
 	scanf("%d",&stud.id);
 	scanf("%s",&stud.name);
 	scanf("%d",&stud.salary);
 	

 	return stud;
 }

