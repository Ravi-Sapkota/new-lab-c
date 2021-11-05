//Write a c program that finds sum of digits of a number using recursive function

#include <stdio.h>

int add(int);
int main(){
    int num=12345;
    printf("Enter the number whose sum of digit you want to find: ");
    scanf("%d",&num);
    printf("The sum of digits of %d is %d",num,add(num));
    return 0;
}

int add(int x){
    int rem;
    if(x>=1){
        rem=x%10;
        x/=10;
        return rem+add(x);
    }
    return x;
}