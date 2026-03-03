//CH.SC.U4AIE25069
//To find max element in an given array
#include <stdio.h>
#include <limits.h>
int main() {
    int a[30], n, i, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    max = a[0]; //initializing.
    for (i = 1; i < n; i++) {
        if (max < a[i]) {
            max = a[i];  //Finding max element.
        }
    }

    printf("Max element = %d\n", max); //Print max element.
    return 0;
}
