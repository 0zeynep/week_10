#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float average=0 , A[8];
	int i;
	
	for(i=0;i<=7;i++){
		printf("Enter a value");
		scanf("%f",&A[i]);
		average+=A[i];
	}
	average=average/8;
	printf("%f",average);
	
	return 0;
}
