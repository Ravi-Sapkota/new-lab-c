// Write a c program that reads a number and finds its reverse

#include <stdio.h>

void main(){
  puts("Enter the number you want to reverse here: ");
  int x;
  scanf("%d",&x);
  int given=x, rem, rev=0;
  while(x!=0){
    rem=x%10;
    x/=10;
    rev=rev*10+rem;
  }
  printf("The reverse of %d is %d.",given,rev);
}
