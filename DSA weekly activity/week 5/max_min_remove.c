//CH.SC.U4AIE25069
// To display maximum and minimum value and then remove them from array.
#include<stdio.h>
#include<stdlib.h>
int main() {
    int max,min,n,*arr;
    printf("Enter size: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL) {
        printf("memory allocation failed! ");
        return 1;}
    for(int i=0;i<n;i++) {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Original array is: \n");
    for(int i=0;i<n;i++) {
        printf("%d\t",arr[i]);
    }
    max=min=arr[0];
    for(int i=0;i<n;i++) {
         if(arr[i]<min) {
            min=arr[i];
         }
         if(arr[i]>max) {
            max=arr[i];
         }
    }
    printf("\nmax value is %d and mini value is %d\n",max,min);
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==max || arr[i]==min) {
            for(int j=i+1;j<n;j++) {
                arr[j-1]=arr[j];
            }
            n--;
            i--;    
        }
    }
    arr=(int*)realloc(arr,n*sizeof(int));
    if(arr==NULL) {
        printf("memory allocation failed! ");
        return 1;
    }
    printf("Array after removing max and min terms: ");
    for(int i=0;i<n;i++) {
        printf("%d\t",arr[i]);
    }
    free(arr);
}