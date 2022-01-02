//28 Write a C progarm that stores 20 numbers to file "number.txt" and then read these numbers from the file and
//   displays only odd numbers to monitor
#include <stdio.h>
int main(){
	FILE *fp=fopen("number.txt","w+");
	fp==NULL?puts("Error opening the file"):puts("File opened sucessfully");
	int i;
	int store[20];
	puts("Enter 20 numbers here:");
	for(i=0;i<20;i++){
		scanf("%d",&store[i]);
		fprintf(fp,"%d ",store[i]);
	}
	rewind(fp);
	int num[20];
	for(i=0;i<20;i++){
		fscanf(fp,"%d",&num[i]);
	}
	puts("\n\nThe odd numbers from the file are:");
	for(i=0;i<20;i++){
		if(num[i]%2){
			printf("%d ",num[i]);
		}
	}
	fclose(fp);
	return 0;
}
