#include <stdio.h>

int main(){
    int num, i, rem, count=0;
    printf("Enter any number here: ");
    scanf("%d",&num);
    for(i=2;i<num;i++){
        rem=num%i;
        if(!rem){
            count++;
            printf("%d divisible by %d\n",num,i);
        }
    }
    if(count){
        printf("The number %d is composite",num);
    }else{
        printf("The number %d is prime",num);
    }
    return 0;
}