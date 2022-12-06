#include<stdio.h>

int main(){
	
	int i=1;
	while(i<=5){
		printf("%d \n", i);
		i++;
	}
	int n;
	printf("enter number : ");
	scanf("%d", &n);
	int j=0;
	while(j<=n){
		printf("%d \n", j);
		j++;
	}
	
	return 0;
}
