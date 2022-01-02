//24 Write a C program that returns pointer
#include <stdio.h>

int* add(int a,int b){
	int sum=a+b;
	return(&sum);
}
int main(){
	int a=2,b=3;
	int* p=add(a,b);
	printf("%d",*p);
	return 0;
}
