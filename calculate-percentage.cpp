#include<stdio.h>

int calcPercentage(int DSA, int OS, int DBMS);

int main(){
	
	int DSA = 98;
	int OS = 96;
	int DBMS = 78;
	
	printf("percentage is : %d", calcPercentage(DSA, OS , DBMS));
	return 0;

}
int calcPercentage(int DSA, int OS, int DBMS){
	return((DSA + OS + DBMS)/ 3);
}
