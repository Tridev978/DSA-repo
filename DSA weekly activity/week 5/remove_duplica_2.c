//CH.SC.U4AIE25069
//To remove duplica dynamically from an array.
#include<stdio.h>
#include<stdlib.h>
int duplica(int **arr,int n) {
    int k=0,flag;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if((*arr)[i]==(*arr)[j]) {
                for(int k=j;k<n-1;k++)
                (*arr)[k]= (*arr)[k+1];
                n--;
                j--;
            }
    }
}
    *arr=(int*)realloc(*arr,(n)*sizeof(int));
    return n;
}
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++) {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    n = duplica(&arr,n);
    for(int i=0;i<n;i++) {
        printf("%d\t",arr[i]);
    }
}