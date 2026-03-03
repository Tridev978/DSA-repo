//CH.SC.U4AIE25069
//Correction of given code.
#include<stdio.h>
#include<stdlib.h>
int main() {
    int *arr=(int*)malloc(6*sizeof(int));
    if(arr==NULL) {
        printf("Memory allocation failed! ");
        return 1;
    }
    arr[5]=10;
    free(arr);
}