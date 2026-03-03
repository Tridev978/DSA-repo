//CH.SC.U4AIE25069
// Find row sum and column sum of array
#include<stdio.h>
int main() {
    int arr[5][5],i,j,row_sum,col_sum;
    for ( i = 0; i < 5; i++)
    {
       for ( j = 0; j < 5; j++)
       {
         printf("Enter element [%d][%d]: ",i+1,j+1); 
         scanf("%d",&arr[i][j]);  // Taking input from user
       }
    }
    printf("Row total= ");
    for ( i = 0; i < 5; i++)
    {
        row_sum = 0;
        for ( j = 0; j < 5; j++)
        {
            row_sum += arr[i][j];  // finding sum of rows
        }
        printf("%d\t",row_sum);
    }
    printf("\nColumn total= ");
    for ( j = 0; j < 5; j++)
    {
        col_sum = 0;
        for ( i = 0; i < 5; i++)
        {
            col_sum += arr[i][j]; // finding sum of columns
        }
        printf("%d\t",col_sum);
    }
}