#include <stdio.h>
struct student{
	char name[10];
	int rollno;
	float marks;
};

void dec_mark(struct student stu[]);
void show(struct student stu[]);
int main()
{
	struct student stu[3]={{"sri", 45, 99}, {"ram", 46, 88.9}, {"Shiva", 47, 99.9}};
	dec_mark(stu);
	show(stu);
}

void dec_mark(struct student stu[])
{
	int i;
	for(i = 0; i<3; i++)
		stu[i].marks--;

}
void show(struct student stu[])
{
	int i;
	for(i = 0; i<3; i++)
	{
		printf("Student%d name is %s\n", i, stu[i].name);
		printf("Student%d rollno is %d\n", i, stu[i].rollno);
		printf("Student%d marks is %f\n", i, stu[i].marks);
	}
}
