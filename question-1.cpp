#include<stdio.h>
#include<math.h>

int main(){
	
	int marks;
	printf("enter number(0-100) : ");
	scanf("%d", &marks);
	if(marks >=0 && marks <= 30){
		printf("fail");
	}
	else if(marks > 30 && marks <= 100){
		printf("pass");
	}
	else{
		printf("wrong marks");
	}
    
	
	return 0;
}
