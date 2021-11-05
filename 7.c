//Write a C program that reads any two numbers and find their GCD(HCF)

#include <stdio.h>

int main(){
    int a,b;
    puts("Enter any two numbers whose HCF you want to find.");
    scanf("%d%d",&a,&b);
    int i, small, reminder, HCF=1;
    (a<b)?(small=a):(small=b);
    for(i=2;i<=small;i++){
        reminder=a%i;
        if(reminder==0){
            reminder=b%i;
            if(reminder==0){
                HCF=i;
            }
        }
    }
    printf("HCF = %d",HCF);
    return 0;
}