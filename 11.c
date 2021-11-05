//Write a c program that reads 10 numbers and find maximum and minimum number

#include <stdio.h>

int main(){
	printf("Enter any 10 numbers here: ");
	int numbers[10]={1,3,5,7,9,0,2,4,6,8};
	int i;
	for(i=0;i<10;i++){
		scanf("%d",&numbers[i]);
	}
	int max=numbers[0], min=numbers[0];
	for(i=1;i<10;i++){
		if(numbers[i]>max)
			max=numbers[i];
		if(numbers[i]<min)
			min=numbers[i];
	}
	printf("Maximum is %d\nMinimum is %d",max,min);
	return 0;
}
