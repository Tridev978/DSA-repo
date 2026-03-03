//CH.SC.U4AIE25069
//To find the highest score, lowest score, and average score from the array.
#include<stdio.h>
int main() {
    int arr[5],i,j,temp;
    float avg,sum = 0;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter marks of quiz of round %d: ",i+1);  //Taking marks as input.
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++) {
        sum += arr[i];
    }
    for ( i = 0; i < 5; i++)
    {
        for ( j = i+1; j < 5; j++)
        {
            if(arr[i]>arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];                      //Sorting array in ascending order.
                arr[j] = temp;
            }
        }  
    }
    printf("lowest score is : %d\n",arr[0]);
    printf("highest score is %d\n",arr[4]);
    avg = sum /5.0;                             //finding average.
    printf("average marks = %.3f",avg);
}