/*
In C and C++, a structure is a user-defined data type that groups multiple related variables under a 
single name.
The members of a structure can be accessed using the dot (.) operator with the structure variable.
The arrow (->) operator is used with a pointer to access members of a structure.
*/

#include<stdio.h>

struct Student{
	int rollNo;
	char name[25];
	char dep[15];
	char Grade;
};

int main(){
	struct Student s1={21,"inam-ul-haq","BSSE",'A'};
	printf("Student information\n");
	printf("Roll-NO: %d\n",s1.rollNo);
	printf("Name: %s\n",s1.name);
	printf("Department: %s\n",s1.dep);
	printf("Grade: %c\n",s1.Grade);
	return 0;
}
