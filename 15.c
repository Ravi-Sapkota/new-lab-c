//Write a c program that tests whether the given string is palindrome or not

#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    puts("Enter any word here: ");
    scanf("%s",str);
    
    int len=strlen(str);
    int i;
    for(i=0;i<len/2;i++)
        if(str[i]!=str[len-i-1]){
            printf("This is not palindrome");
            return 0;
        }
    printf("This is palindrome");
    return 0;
}