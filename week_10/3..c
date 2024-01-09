#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A[10],i;
	
	for(i=0;i<=9;i++){
		scanf("%d",&A[i]);
	}
	for(i=9;i>=0;i--){
		printf("%d\n",A[i]);
	}
	return 0;
}
