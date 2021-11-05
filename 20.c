//Write a c program that prints prime numbers from 200 to 500 using funcion

#include <stdio.h>

int prime(int, int);

int main(){
	puts("The prime numbers between 200 and 500 are:");
	prime(200, 500);
	return 0;
}

int prime(int a, int b){
	if(a>b){
		return 0;
	}
	int i, count;
	count=0;
	for(i=2;i<a;i++){
		if(a%i==0)
			count++;
	}
	if(count==0)
		printf("%d ",a);
	a++;
	prime(a,b);
}