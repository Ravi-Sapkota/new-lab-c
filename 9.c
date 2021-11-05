/*	Write a c program that prints the following pattern
	      *
	    * * *
	  * * * * *
	* * * * * * *
*/

#include <stdio.h>

int main(){
	int i, j, k;
	for(i=1;i<5;i++){
		for(k=5-i-1;k>0;k--){
			printf("  ");
		}
		for(j=1;j<2*i;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}