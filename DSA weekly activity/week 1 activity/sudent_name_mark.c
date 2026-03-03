#include<stdio.h>
int main() {
   struct student {
    int marks[5][3];
    char name[5][30];
   }s;
   int i,j,sum,topper=0;
   float avg[5];
   
   for (i = 0; i < 5; i++) {
        printf("Enter name of student %d",i+1);
        scanf("%s",s.name[i]);
        printf("Enter marks of %s \n", s.name[i]);
        for (j = 0; j < 3; j++) {
            printf("For subject %d: ", j + 1);     // getting marks.
            scanf("%d", &s.marks[i][j]);
        }
    }
   for (i = 0; i < 5; i++) {
        sum = 0;
        for (j = 0; j < 3; j++) {
               sum += s.marks[i][j];
        }
        avg[i] = sum/3.0;  //Calculating average.
    }
    for ( i = 1; i < 5; i++)
    {
        if(avg[topper]<avg[i]) 
        topper = i;
    } 
    printf("The topper is %s\n",s.name[topper]);  //printing topper.
    printf("His average mark is %.2f",avg[topper]);  //printing average.
   return 0;  
}