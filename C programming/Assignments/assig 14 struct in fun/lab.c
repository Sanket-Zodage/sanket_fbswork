#include<stdio.h>
typedef struct employ
{
	int id;
	char name[10];
	int sallary;
}employ;

void main()
{
	employ srr[2];  //crate employ array
	printf("enter the employ id,name,sallary");
	for(int i=0;i<2;i++)
	{
		
		scanf("%d",&srr[i].id);
		scanf(" %s",srr[i].name);
		scanf("%d",&srr[i].sallary);
		printf("enter the employ id,name,sallary");
		
	}
	for(int i=0;i<2;i++)
	{
		printf("id is %d",srr[i].id);
		printf("name is %s",srr[i].name);
		printf("sallary is %d",srr[i].sallary);
		
}
}