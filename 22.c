//22 Write a C program that reads the roll no,name and marks of 10 students 
//	 and then display the details of those students whose marks is greater than 80
#include<stdio.h>
struct student{
	int roll;
	char name[20];
	int marks;
};
int main(){
	int i;
	struct student s[10];
	for(i=0;i<10;i++){
		printf("Enter the Roll number, Name and Marks of student 1 here:\n");
		scanf("%d%s%d",&s[i].roll,s[i].name,&s[i].marks);
	}
	printf("\n\n\n\n");
	puts("Students with more then 80 marks are:\nName\tRoll\tMarks");
	for(i=0;i<10;i++){
		if(s[i].marks>80){
			printf("%s\t%d\t%d\n",s[i].name,s[i].roll,s[i].marks);
		}
	}
	return 0;
}
