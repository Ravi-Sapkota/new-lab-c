//26 Write a C Program that reads n numbers and finds mean and median using dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,temp,sum=0,median;
    int *p;
    float mean;
    printf("How many numbers\n");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    printf("Enter %d numbers\n", n);
    for(i=0;i<n;i++){
        scanf("%d",p);
        p++;
    }
    p=p-n;
    for(i=0;i<n;i++){
        sum=sum+*(p+i);
    }
    mean=(float)sum/n;
    
    for(i=0;i<n;i++)
        for(j=0;j<n-1;j++)
            if(*(p+j)>*(p+j+1)){
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
    if(n%2==1){
        i=(n+1)/2;
        median=*(p+i-1);
    }else{
        i=n/2;
        median=(*(p+i-1)+*(p+i))/2;
    }
    printf("Mean	=%0.2f\n", mean);
    printf("Median	=%d\n", median);
    return 0;
}
