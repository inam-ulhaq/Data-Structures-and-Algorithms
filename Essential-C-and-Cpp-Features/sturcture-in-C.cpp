/* in c and c++ structure is a user define data type that gorup multiple related varable under a 
single name.
the member of sturcture can be use using dot operator using class name.
-> is use with pointer to access the member of structre.
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
