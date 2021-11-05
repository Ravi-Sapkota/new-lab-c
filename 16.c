//Write a c program that finds factorial of a number using recursive function

#include <stdio.h>

int factorial(int);
int main(){
    int num;
    printf("Enter a number whose factorial you want to find: ");
    scanf("%d",&num);
    int fact = factorial(num);
    printf("The factorial of %d is %d.",num,fact);
    return 0;
}

int factorial(int x){
    static int fact;
    if(x==2){
        return 2;
    }else if(x==1||x==0){
        return 1;
    }
    return fact=x*factorial(x-1);
}