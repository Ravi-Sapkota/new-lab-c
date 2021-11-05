#include <stdio.h>

int main(){
	int n, sum=0, rem, temp;
	printf("Enter the number whose sum of digits you want to find: ");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		rem=n%10;
		sum+=rem;
		n/=10;
	}
	printf("The sum of digits of %d is %d.\n",temp, sum);
	return 0;
}