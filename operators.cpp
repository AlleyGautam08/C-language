#include<stdio.h>
#include<math.h>

int main(){
	
	printf("%d \n", 4==4);
	printf("%d \n", 4!=4);
	printf("%d \n", 3>=4);
	printf("%d \n", 3<=4);
	printf("%d \n", 4>3 && 5>2);
	printf("%d \n", 3>4 || 5>2);
	printf("%d \n", !(5>1));
	printf("%d \n", !((5>1) && (3>4)));
	
	return 0;
}
