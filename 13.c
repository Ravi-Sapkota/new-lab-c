//Write a c program that reads 10 numbers and print them in ascending order

#include <stdio.h>

int main(){
	printf("Enter any 10 numbers here: ");
	int numbers[10];
	int i,j,temp;
	for(i=0;i<10;i++){
		scanf("%d",&numbers[i]);
	}
    for(j=0;j<10;j++){
        for(i=0;i<10-1;i++){
            if(numbers[i]>numbers[i+1]){
                temp=numbers[i];
                numbers[i]=numbers[i+1];
                numbers[i+1]=temp;
            }
        }
    }
    puts("The sorted data is:");
    for(i=0;i<10;i++){
        printf("%d ",numbers[i]);
    }
    return 0;
}
