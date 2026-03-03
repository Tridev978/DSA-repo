//CH.SC.U4AIE25069
//to count and display the total number of times each product (0 to 4) was sold.
#include <stdio.h>
int main() {
    int n,i,count[5] = {0};
    printf("Enter no. of products: ");
    scanf("%d",&n);
    int sales[n];
    for(i=0;i<n;i++) {
        printf("Enter product  code  of item %d: ",i+1);   //Taking inputs.
        scanf("%d",&sales[i]);
    }
    for (i = 0; i < n; i++) {
        count[sales[i]]++;      //counting number of times same product has been sold
    }
    for (i = 0; i < 5; i++) {
        printf("Product %d sold: %d times\n", i, count[i]);
    }
}
