#include<stdio.h>

int main(){
	
	int i=1;
	do{
		printf("%d \n", i);
		i++;
	}while(i<=5);
	
//	first n natural numbers
    int n;
    printf("enter number : ");
    scanf("%d ",&n);
    int sum =0;
    for(int j=1; j<=n; j++){
    	sum = sum +j;
	}
	printf("sum is %d \n", sum);
	for(int j=n; j>=1; j--){
		printf("%d \n", j);
	}
	
	return 0;
}
