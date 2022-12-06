#include<stdio.h>

void namaste();
void banjour();

int main(){
	printf("enter f for french & i for indian : ");
	char ch;
	scanf("%c", &ch);
	if(ch == 'i'){
		namaste();
	}else{
		banjour();
	}
	return 0;
}


void namaste(){
	printf("namaste\n");
}
void banjour(){
	printf("banjour\n");
}
