//25 Write a C programs that reads n numbers and print only top five numbers using dynamic memory allocations
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,i,j,temp;
	do{
		puts("How many numbers do you want to enter?");
		scanf("%d",&n);
		if(n<5){
			puts("Input must be more than 5.");
		}
	}while(n<5);
	int *p;
	p=(int *)malloc(n*sizeof(int));
	printf("Enter the %d numbers here:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(*(p+j)<*(p+j+1)){
				temp=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=temp;
			}
		}
	}
	
	puts("The five largest numbers are:");
	for(i=0;i<5;i++){
		printf("%d ",*(p+i));
	}
	return 0;
}
