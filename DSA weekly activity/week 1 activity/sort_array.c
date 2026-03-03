//CH.SC.U4AIE25069
//Sort array in ascending order
#include<stdio.h>
int main() {
    int n,i,j,temp;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);  // Taking input from user
    }
    for ( i = 0; i < n-1; i++)
    {
      for ( j= 0; j<n-i-1; j++)
      {
        if(arr[j]>arr[j+1]) {
            temp=arr[j];
            arr[j]=arr[j+1];  //swapping
            arr[j+1] = temp;
        }
      }
      
    }
    printf("sorted array: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }   
}