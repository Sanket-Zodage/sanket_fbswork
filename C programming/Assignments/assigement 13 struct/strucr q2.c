struct employ
{
	int id;
	char name[20];
	int  salary;
};
void main()
{
	struct employ n1,n2;
	printf("enter the employe id,name,salary");
	scanf("%d",&n1.id);
	scanf("%s",&n1.name);
	scanf("%d",&n1.salary);
    printf("enter the employe id,name,salary");
	scanf("%d",&n2.id);
	scanf("%s",&n2.name);
	scanf("%d",&n2.salary);
{
	printf("employ id %d,employ name %s,employ salary %d",n1.id,n1.name,n1.salary);
	printf("\nemploy id %d,employ name %s,employ salary %d",n2.id,n2.name,n2.salary);
}

	
}