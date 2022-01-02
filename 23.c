//23 Write a C program that finds sum of elements of two one dimensional arrays using pointers
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,i,s1=0,s2=0;
	int *m1, *m2;
	printf("Enter the number of elements of array: ");
	scanf("%d",&n);
	m1=(int*)calloc(n,sizeof(int));
	m2=(int*)calloc(n,sizeof(int));
	puts("Enter 1st array here: ");
	for(i=0;i<n ;i++)
		scanf("%d",m1+i);
	puts("Enter 2nd array here: ");
	for(i=0;i<n ;i++)
		scanf("%d",m2+i);
	for(i=0;i<n;i++){
		s1+=*(m1+i);
		s2+=*(m2+i);
	}
	printf("Sum of elements of 1st array is %d.\n",s1);
	printf("Sum of elements of 2nd array is %d.\n",s2);
	printf("And the sum of elements of both array is %d.",s1+s2);
	return 0;
}
