//CH.SC.U4AIE25069
//Addition of two matrices and display the result.
#include <stdio.h>
int main() {
    int m,n;
    printf("Enter no. of rows and columns of both matrices : ");
    scanf("%d %d",&m,&n);
    int a[m][n], b[m][n], c[m][n];
    int i, j;
    printf("Enter elements of matrix 1: ");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)      //Taking input in matrix 1.
            scanf("%d", &a[i][j]);
    printf("Enter elements of matrix 2: ");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &b[i][j]);      //Taking input in matrix 2.

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];
    printf("Sum of matrix 1 and matrix 2: \n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", c[i][j]);     //Finding sum of matrix1 and matrix 2.
        printf("\n");
    }

    return 0;
}
