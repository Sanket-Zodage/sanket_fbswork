struct hr
{
	int  id;
	char name[10];
	int sallary;
	int commition;
};
struct hr storehr();
void displayhr(struct hr stud);
void main()
{
	struct hr s1,s2;
	
	s1=storehr();
	s2=storehr();//call function
	
	displayhr(s1);
	displayhr(s2);
	
	void displayhr(struct hr stud);
	{
		printf("hr id %d,hr name %s, hr salary %d, hr salary %d, hr coomition %d");
	}
	
}


struct hr storehr()
{
	struct hr stud;
	printf("enter the hr id,name,salary,commition");
	scanf("%d",&stud.id);
	scanf("%s",&stud.name);
	scanf("%d",&stud.sallary);
	scanf("%d",&stud.commition);
	
	return stud;
}