//Write a c program that finds product of two numbers using recurseve function

#include <stdio.h>

int product(int a, int b){
    if(b==0)
        return 0;
    return a+product(a,--b);
}
int main(){
    printf("Enter any two numbers you want to multiply:\n");
    int a, b;
    scanf("%d%d",&a,&b);
    printf("%d*%d = %d",a,b,product(a,b));
    return 0;
}