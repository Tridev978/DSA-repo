//CH.SC.U4AIE25069
//Frequency of given number
#include <stdio.h>
int main() {
    int  n, i, num, count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to find frequency: ");
    scanf("%d", &num);
    for(i = 0; i < n; i++) {
        if(a[i] == num) {
            count++;
        }
    }

    printf("Frequency of %d = %d\n", num, count);
    return 0;
}
