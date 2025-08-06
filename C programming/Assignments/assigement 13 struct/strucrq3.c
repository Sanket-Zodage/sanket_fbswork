struct admin
{
	int id;
	char name[20];
	int  salary;
	int allowance;
};
void main()
{
	struct admin n1,n2;
	printf("enter the admin id,name,salary,allowance");
	scanf("%d",&n1.id);
	scanf("%s",&n1.name);
	scanf("%d",&n1.salary);
	scanf("%d",&n1.allowance);
    printf("enter the employe id,name,salary,allowance");
	scanf("%d",&n2.id);
	scanf("%s",&n2.name);
	scanf("%d",&n2.salary);
	scanf("%d",&n2.allowance);
{
	printf("employ id %d,admin name %s,employ salary %d,employ allowance %d",n1.id,n1.name,n1.salary,n1.allowance);
	printf("\nemploy id %d,employ name %s,employ salary %d,employ allowance %d",n2.id,n2.name,n2.salary,n2.allowance);
}

	
}