//CH.SC.U4AIE25069
// Insert and display element in an array
#include<stdio.h>
int main() {
    int m,n,i,j;
    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("Enter number of columns: ");
    scanf("%d",&n);
    int arr[m][n];
    for ( i = 0; i < n; i++)
    {
       for ( j = 0; j < m; j++)
       {
         printf("Enter element [%d][%d]: ",i+1,j+1);
         scanf("%d",&arr[i][j]);
       }
    }
       for ( i = 0; i < n; i++)
    {
       for ( j = 0; j < m; j++)
       {
         printf("%d ",arr[i][j]);
       }
       printf("\n");
    }
}