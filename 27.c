//27 Write a C program that creates file"myfile.txt" and write message "Welcome to ASCOL College" to this file. 
//	 Also read the content of file and print them
#include <stdio.h>
int main(){
	FILE *fp=fopen("myfile.txt","w+");
	if(fp==NULL){
		puts("File was not opened");
	}
	fputs("Welcome to ASCOL Collage.",fp);
	rewind(fp);
	char str[30];
	fgets(str,30,fp);
	puts("Content of the file is:");
	puts(str);
	fclose(fp);
	return 0;
}
