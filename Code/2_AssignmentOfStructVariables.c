/*P2.23 Program to assign a structure variable to another structure variable*/

//We can assign values of struct variable to another struct variable, if both variable value are of same type.

#include<stdio.h>

struct student {
	char name[20];
	int rollno;
	float marks;
};

int main( )

{
	struct student stu1 = {"Anjali", 12, 98},stu2;
	stu2 = stu1;
	printf("stu1 : %s   %d   %.2f\n", stu1.name, stu1.rollno, stu1.marks);
	printf("stu2 : %s   %d   %.2f\n", stu2.name, stu2.rollno, stu2.marks);
}

