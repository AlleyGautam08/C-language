#include<stdio.h>
#include<string.h>

struct student{
	int roll;
	float cgpa;
	char name[100];
};

int main(){
	
	struct student s1;
	s1.roll = 12345677;
	s1.cgpa = 9.9;
    strcpy(s1.name, "alley");
	
	printf("student name = %s\n", s1.name);
	printf("student roll no = %d\n", s1.name);
	printf("student cgpa = %f\n", s1.name);
	return 0;
}
