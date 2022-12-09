#include<stdio.h>

int main(){
	FILE *fptr;
	fptr = fopen("text.txt", "r");
	char ch;
	ch = fgetc(fptr);
	while(ch != EOF ){
		printf("%c", ch);
		ch = fgetc(fptr);
	}
	printf("\n");
	
//	fprintf(fptr, "%c", 'm');
//	fprintf(fptr, "%c", 'a');
//	fprintf(fptr, "%c", 'n');
//	fprintf(fptr, "%c", 'g');
//	fprintf(fptr, "%c", 'o');
//	
	fclose(fptr);
	
	
	return 0;
}
