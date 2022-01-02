//25 Write a C programs that reads n numbers and print only top five nubers using dynamic memory allocations
#include <stdio.h>

int* add(int a,int b){
	int sum=a+b;
	return(&sum);
}
int main(){
	int a=2,b=3;
	int* sum=add(a,b);
	printf("%d",*sum);
	return 0;
}
