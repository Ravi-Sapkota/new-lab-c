//Write a C program that reads any two numbers and find their LCM

#include <stdio.h>

int main(){
    int a,b;
    puts("Enter any two numbers whose LCM you want to find.");
    scanf("%d%d",&a,&b);
    int large;
    (a>b)?(large=a):(large=b);
    while (1){
        if(large%a==0 && large%b==0){
            printf("LCM = %d",large);
            return 0;
        }
        large++;
    }
}