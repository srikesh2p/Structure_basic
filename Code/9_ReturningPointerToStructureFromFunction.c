/* Program to understand how a pointer to structure is returned from a function */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
	char name[20];
	int rollno;
	float mark;
};

struct student *assign_fun();
void print(struct student *stuptr);
int main()
{
	struct student *stuptr;
	stuptr = assign_fun();
	print(stuptr);
}

struct student *assign_fun()
{
	struct student *ptr;
	ptr = (struct student *)malloc(sizeof(struct student));
	strcpy(ptr->name,"Ram");
	ptr->rollno=55;
	ptr->mark=44.31;
	return ptr;
}

void print(struct student *stuptr)
{
	printf("Name is %s\n", stuptr->name);
	printf("Rollno is %d\n", stuptr->rollno);
	printf("Mark is %f\n", stuptr->mark);
}
