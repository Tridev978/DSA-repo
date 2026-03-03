//CH.SC.U4AIE25069
//Scanning and printing n element in an array
#include<stdio.h>
int main() {
    int n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d in array: ",i+1);
        scanf("%d",&arr[i]); // Taking inputs.
    }
    printf("Elements in array are: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]); // Printing elements.
    }
    
}