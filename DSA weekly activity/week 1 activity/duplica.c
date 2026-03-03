#include <stdio.h>
int main() {
    int a[20], b[20], n, i, j, k = 0, flag,temp;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        flag = 0;
        for (j = 0; j < k; j++) {
            if (a[i] == b[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            b[k++] = a[i];
        }
    }
    printf("Array after removing duplicates:\n");
    for (i = 0; i < k; i++)
        printf("%d ", b[i]);
    printf("\nArray after sorting:\n");
    for ( i = 0; i < k-1; i++)
    {
       for ( j = 0; j < k-i-1; j++)
       {
        if(b[j]>b[j+1]) {
            temp = b[j+1];
            b[j+1] = b[j];
            b[j] = temp;
        }
       }     
    }
    for ( i = 0; i < k; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
