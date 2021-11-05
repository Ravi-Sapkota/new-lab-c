//Write a c program that finds sum and product of two 3*3 matrix

#include <stdio.h>

#define n 3

int main(){
	int mat1[n][n], mat2[n][n];
	int i,j;

	//taking input of 1st matrix
	printf("Enter the first matrix row-wise here:\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&mat1[i][j]);

	//taking input of second matrix
	printf("Enter the second matrix row-wise here:\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&mat2[i][j]);

	//calculating and printing the sum matrix
	printf("The sum matrix of first and second matrices is:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d ",mat1[i][j]+mat2[i][j]);
		printf("\n");
	}

	//calculating and printing product matirx
	printf("The product matrix of first and second matrices is:\n");
	int k,temp;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			temp=0;
			for(k=0;k<n;k++)
				temp=temp+mat1[i][k]*mat2[k][j];
			printf("%d ",temp);
		}
		printf("\n");
	}
	return 0;
}
