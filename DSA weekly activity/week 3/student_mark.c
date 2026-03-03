//CH.SC.U4AIE25069
//Finding average mark of students using malloc() and realloc().
#include<stdio.h>
#include<stdlib.h>
int main() {
    int *arr,n,additional,sum=0;
    float avg;
    printf("Enter the total no. of students: ");  
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));  //malloc function.
    if(arr==NULL) {
        printf("Memory allocation failed: ");  //checking for failure of memory allocation.
        return 0;
    }
    printf("Enter their marks: ");
    for(int i=0;i<n;i++) 
    scanf("%d",&arr[i]);
    printf("Enter total no. of additional students: ");
    scanf("%d",&additional);
    arr=(int*)realloc(arr,(additional+n)*sizeof(int));     //realloc function.
    if(arr==NULL) {
        printf("Memory reallocation failed! ");
        return 0;
    }
    printf("Enter those new student's marks: ");
    for(int i=n;i<(additional+n);i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<(n+additional);i++) {
        sum+=arr[i];
    }
    avg=(float)sum/(n+additional);
    printf("The average mark is %.3f",avg);  //find average.
    free(arr);
}