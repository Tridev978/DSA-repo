//CH.SC.U4AIE25069
//Scanning and printing 2D array.
//Time complexity: O(n^2).
#include<stdio.h>
int main() {
    int i,j,n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter elements in matrix: ");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&arr[i][j]);  // Take inputs.
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("%d ",arr[i][j]);  //display those inputs.
        }
        printf("\n");
    }
}