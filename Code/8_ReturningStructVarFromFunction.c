#include <stdio.h>
#include <string.h>

struct student{
	char name[20];
	int rollno;
	int marks;
};

struct student edit(struct student stud);
void show(struct student stud);

int main()
{
	struct student stu;
	strcpy(stu.name, "anjali");
	stu.rollno=1;
	stu.marks=45;
	stu = edit(stu);
	show(stu);
}

struct student edit(struct student stud)
{
	stud.marks++;
	return stud;
}

void show(struct student stud)
{
	printf("Name is %s\n\r", stud.name);
	printf("Rollno is %d\n\r", stud.rollno);
	printf("Mark is %d\n\r", stud.marks);
}
