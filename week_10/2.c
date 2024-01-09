#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,square=0,A[10];
	for(i=0;i<=9;i++){
		scanf("%d",&A[i]);
		if(A[i]!=-1){
		square=A[i]*A[i];
		printf("%d",square);	
		}
		else{
			break;
		}
	
}
		
		
		
 
	
	return 0;
}
