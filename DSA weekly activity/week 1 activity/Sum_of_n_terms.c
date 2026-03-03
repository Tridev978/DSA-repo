#include <stdio.h>
int main() {
    int n, k;
    int x;
    int sum;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter last odd number n: ");
    scanf("%d", &n);
    k = (n + 1) / 2;      // number of odd terms
    sum = x * k * k;

    printf("Sum of the series = %d\n", sum);

    return 0;
}
