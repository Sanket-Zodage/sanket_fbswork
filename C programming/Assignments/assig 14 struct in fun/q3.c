struct  admin
{
	int id;
	char name[20];
	int sallary;
	int allowance;
};
struct admin storeadmin();
void displayadmin(struct admin stud);
void main()
{
	struct admin s1,s2;
	s1=storeadmin();  // function call
	s2=storeadmin();
	
	displayadmin(s1);
	displayadmin(s2);
	
}
    void displayadmin(struct admin stud)
	{
		printf("admin id %d, name %s, sallary %d, allowance %d",stud.id,stud.name,stud.sallary,stud.allowance);
	  }  
      
      
      
      
      
struct admin storeadmin()
{
	struct admin stud ; //function defination
	printf("enter  the admin id, name ,sallary, allowance");
	sacnf("%d",&stud.id);
	scanf("%s",&stud.name);
	scanf("%d",&stud.sallary);
	scanf("%d",&stud.allowance);
	
	
	return stud;
}