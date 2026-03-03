//CH.SC.U4AIE25069
//To remove duplica dynamically from an array.
#include<stdio.h>
#include<stdlib.h>
int *arr=NULL;
int duplica(int n) {
    int b[n],k=0,flag;
    for(int i=0;i<n;i++) {
        flag=0;
        for(int j=0;j<k;j++) {
            if(arr[i]==b[j]) {
               flag=1;
               break;
            }
        }
        if(flag==0)
        b[k++]=arr[i];
    }
    int *temp = (int *)realloc(arr, k * sizeof(int));
    if (temp != NULL)
        arr = temp; 
    for(int i=0;i<k;i++) {
        arr[i]=b[i];
    }
    return k;
}
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++) {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    n = duplica(n);
    printf("Array after removal of duplica: ");
    for(int i=0;i<n;i++) {
        printf("%d\t",arr[i]);
    }
    free(arr);
}