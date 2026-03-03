//CH.SC.U4AIE25069
//Dynamic memory allocation using malloc().
#include<stdio.h>
#include<stdlib.h>
int main() {
    int *arr,n,i;
    printf("Enter value of n: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));     //using malloc() function for dynamic memory allocation.
    if(arr==NULL) {
        printf("Memory allocation failed! "); //checking for memory failure.
        return 1;
    }
    printf("Enter the %d elemnts: ",n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);       //Scanning input.
    }
    printf("The elements entered are: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);    //displaying them.
    }   
    free(arr);
}