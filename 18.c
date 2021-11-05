//Write a c program that finds nth fibonacci number using recursive funciton

#include <stdio.h>

int fibonacci(int x, int first, int second){
    if(x==1){
        return first;
    }
    fibonacci(--x,second,first+second);
}
int main(){
    printf("Enter the position of fibonacci here: ");
    int x;
    scanf("%d",&x);
    int a=fibonacci(x,0,1);
    printf("%dth fibonacci is %d",x,a);         //0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,........
    return 0;
}