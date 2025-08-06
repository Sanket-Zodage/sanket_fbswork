struct salesmanager
{
	int id ;
	char name[10];
	int salary;
};
void main()
{
	struct salesmanager s1,s2;
	printf("enter the salesman 1 id,name,salary");
	scanf("%d",&s1.id);
	scanf("%s",&s1.name);
	scanf("%d",&s1.salary);
		printf("enter the salesman 2 id,name,salary");
	scanf("%d",&s2.id);
	scanf("%s",&s2.name);
	scanf("%d",&s2.salary);
	{
			printf("\nsalesman id %d,name %s,salary%d",s1.id,s1.name,s1.salary);
			printf("salesman id %d,name %s,salary%d",s2.id,s2.name,s2.salary);
	}
}