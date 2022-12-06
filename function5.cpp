#include<stdio.h>

void calculatorPrice(float value);

 int main(){
 	
 	float value = 100.0;
 	calculatorPrice(value);
 	
 	return 0;
 }
 
 void calculatorPrice(float value){
 	value = value + (0.18*value);
 	printf("final price is : %f", value);
 }
