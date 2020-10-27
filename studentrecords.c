#include<stdio.h>
#include<stdlib.h>
struct student
{
	int roll_nbr;
	char name[20];
	int age;
	float percentage;
};
void print_youngest_info(struct student*); 
int main()
{
	struct student var[5];
	for(int i=0;i<5;i++)
	{
		__fpurge(stdin);
		printf("enter roll number[%d]:",i+1);
		scanf("%d",&var[i].roll_nbr);
		printf("enter name of the student:");
		__fpurge(stdin);
		scanf("%[^\n]s",var[i].name);
		printf("enter age of the student:");
		scanf("%d",&var[i].age);
		printf("enter total percentage:");
		scanf("%f",&var[i].percentage);
	}
	print_youngest_info(var);
}
void print_youngest_info(struct student *ptr)
{
	int min_age=70000,min_index=0;
	for(int i=0;i<5;i++)
	{
             if(min_age>ptr[i].age)
	     {
		     min_age=ptr[i].age;
	             min_index=i;
	     }
	}
	printf("roll number:%d\n",ptr[min_index].roll_nbr);
	printf("name:%s\n",ptr[min_index].name);
	printf("age:%d\n",ptr[min_index].age);
	printf("percentage:%f\n",ptr[min_index].percentage);
}

