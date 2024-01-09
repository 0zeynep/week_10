#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,temp,number,A[5];
	printf("Enter a number");
	scanf("%d",&number);
	A[4]=number%10;
	number=number/10;
	
	for(i=3;i>=0;i--){
		temp=number%10;
		number=number/10;
		
		A[i]=temp;
		
	}
	for(i=0;i<=4;i++){
		printf("%d\n",A[i]);
	}
	
	return 0;
}
