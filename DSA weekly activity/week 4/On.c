//CH.SC.U4AIE25069
//Displaying a 1D array.
//Time Complexity:- O(n).
#include<stdio.h>
int main() {
    int i;
    int arr[] = {1,2,3,4,111,932};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Element in given array are: ");
    for(i=0;i<n;i++) {
    printf("%d\t",arr[i]);
    }
}