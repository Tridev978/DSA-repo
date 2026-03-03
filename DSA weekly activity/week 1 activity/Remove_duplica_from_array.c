//CH.SC.U4AIE25069
//Removing duplica from array
#include <stdio.h>
int main() {
    int n, i, j, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i]==a[j]) {
                for(k = j; k < n - 1; k++) {
                    a[k] = a[k+1];
                }
                n--;     
                j--;     
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
