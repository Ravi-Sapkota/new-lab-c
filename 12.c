//Write a c program that reads 20 numbers and find their sum

#include <stdio.h>

int main(){
    int i, sum=0, numbers[20];
    puts("Enter any 20 numbers here:");
    for(i=0;i<20;i++){
        scanf("%d",&numbers[i]);
    }
    for(i=0;i<20;i++){
        sum+=numbers[i];
    }
    printf("The sum of given 20 numbers is %d",sum);
    return 0;
}