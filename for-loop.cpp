#include<stdio.h>

int main(){
	
	for(int i=0; i<=5; i++){
		printf("hello  cabby \n");
	}
	for(int i=0; i<=15; i++){
		printf("%d \n", i);
	}
	for(int i=10; i>=1; i--){
		printf("%d \n", i);
	}
	int a=1;
	printf("%d \n", a++);
	printf("%d \n", a);
	int b=1;
	printf("%d \n", ++b);
	printf("%d \n", b);
	
	for(float j=1.0; j<=5.0; j++){
		printf("%f \n", j);
	}
	for(char ch='a'; ch<='z'; ch++){
		printf("%c \n", ch);
	}
	
	return 0;
}
