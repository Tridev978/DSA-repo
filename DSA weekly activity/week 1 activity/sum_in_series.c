//CH.SC.U4AIE25069
//To find sum of the series: x+3x+5x+.....+n
#include <stdio.h>
int main() {
    int x, n, sum = 0;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of n: ");
    scanf("%d", &n);
    sum = x * n * n;     //since 1+3+5+...+n = n^2.
    printf("Sum upto n terms is %d\n", sum);
    return 0;
}
