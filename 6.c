//Write a c program that finds root of quadratic equation Ax^2+Bx+c

#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	printf("Enter the coefficient of equation Ax^2+Bx+C\nA = ");
	scanf("%d",&a);
	printf("B = ");
	scanf("%d",&b);
	printf("C = ");
	scanf("%d",&c);
	float det=b*b-4*a*c;
	if(det<0){
	    puts("The given equation has complex solution.");
	}else if(det==0){
	    float root= (-1*b)/(2*a);
	    printf("The given equation is perfect square and its root is %0.2f",root);
	}else{
	    float x1=(-b+sqrt(det))/(2*a);
	    float x2=(-b-sqrt(det))/(2*a);
	    printf("The solution of given equation is:\nx=%0.2f\nx=%0.2f",x1,x2);
	}
	return 0;
}
