//CH.SC.U4AIE25069
//To take marks of 5 students in 3 subject and print the topper and his average marks
#include<stdio.h>
int main() {
   int marks[5][3],i,j,highest,topper=0,sum;
   float avg[5];
   for (i = 0; i < 5; i++) {
        printf("Enter marks of Student %d\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("For subject %d: ", j + 1);     // getting marks.
            scanf("%d", &marks[i][j]);
        }
    }
   for (i = 0; i < 5; i++) {
        sum = 0;
        for (j = 0; j < 3; j++) {
               sum += marks[i][j];
        }
        avg[i] = sum/3.0;  //Calculating average.
    }
    for ( i = 1; i < 5; i++)
    {
        if(avg[topper]<avg[i]) 
        topper = i;
    } 
    printf("The topper is student %d\n",topper+1);  //printing topper.
    printf("His average mark is %.2f",avg[topper]);  //printing average.
   return 0;  
}