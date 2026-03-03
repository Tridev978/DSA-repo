//CH.SC.U4AIE25069
/*To calculate the average temperature, and then 
display all days where the temperature was above average.*/
#include <stdio.h>
int main() {
    int temp[7];
    int i;
    float sum = 0, avg;
    for ( i = 0; i < 7; i++)
    {
        printf("Enter temperature of day %d: ",i+1);
        scanf("%d",&temp[i]); //taking input.
    }
    for (i = 0; i < 7; i++) {
        sum += temp[i];   //finding sum.
    }
    avg = sum / 7;    //calculating average.
    printf("Average temperature: %.2f\n", avg);
    for (i = 0; i < 7; i++) {
        if (temp[i] > avg) {
            printf("Day %d temperature above average: %d\n", i + 1, temp[i]);    //display all days where the temperature was above average.
        }
    }
}
