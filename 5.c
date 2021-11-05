#include <stdio.h>
int main(){
	int num, i, rem, count;
	for(num=200;num<=300;num++){
		count=0;
		for(i=2;i<num;i++){
			rem=num%i;
			if(rem==0)
				count++;
		}
		if(count==0)
			printf("%d ",num);
	}
	return 0;
}
