//Write a c program that reads a number and tests if it is even or odd

#include <stdio.h>
int main(){
  puts("Enter the number you want to test here: ");
  int x;
  scanf("%d",&x);
  x%2?printf("%d is odd.",x):printf("%d is even",x);
  return 0;
}
