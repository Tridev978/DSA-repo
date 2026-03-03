//CH.SC.U4AIE25069
//to count and print how many times each rating (1–5) appears in the array
#include <stdio.h>
int main() {
    int i, n;
    int count[6] = {0};   // initializing count.
    printf("Enter number of ratings: ");
    scanf("%d", &n);
    int ratings[n];
    for (i = 0; i < n; i++) {
        printf("Enter rating of customer %d (1 to 5): ", i + 1);   // Taking ratings input.
        scanf("%d", &ratings[i]);
    }
     for ( i = 0; i < n; i++)
     {
        count[ratings[i]]++;      //updating count for same ratings.
     }
    printf("Rating Summary:\n");
    for (i = 1; i <= 5; i++) {
        printf("%d stars: %d\n", i, count[i]);
    }
    return 0;
}