//CH.SC.U4AIE25069
//Multiplication of 2 matrices.
//Time complexity: O(n^3).
#include<stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int mat1[n][n],mat2[n][n],product_mat[n][n],i,j,k;
    printf("For matrix 1:\n");
    for( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("Enter element at position [%d][%d]: ",i,j);  //take input in matrix 1.
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("For matrix 2: \n");
        for( i = 0; i < n; i++)
         {
          for ( j = 0; j < n; j++)
          {
            printf("Enter element  at position [%d][%d]: ",i,j);  //Take input in matrix 2.
            scanf("%d",&mat2[i][j]);
            product_mat[i][j] = 0;
          }  
        }       
    for( i = 0; i<n; i++)
    {
        for ( j = 0; j<n; j++)
        {
            for ( k = 0; k<n; k++)
            {
                product_mat[i][j] += mat1[i][k]*mat2[k][j];   //find product.
            } 
        }
    }
    printf("Product of matrix 1 * matrix2 is\n");
    for( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",product_mat[i][j]);    //display product.
        }
       printf("\n");
    }  
    }