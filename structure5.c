#include<stdio.h>
#include<string.h>

typedef struct bankAccount{
	int accountno;
	char name[100];
}acc;

int main(){
	
	acc acc1 = {123, "Alley"};
	acc acc2 = {125, "cabby"};
	acc acc3 = {127, "devraj"};
	
	printf("acc no = %d", acc1.accountno);
	printf("name = %d", acc1.name);
	
	return 0;
}
