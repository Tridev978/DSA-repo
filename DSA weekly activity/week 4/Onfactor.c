//CH.SC.U4AIE25069
//permutation of 3 numbers.
//Time complexity:- O(n!*n).
#include<stdio.h>
void swap(int *a,int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void permute(int arr[],int l,int r) {
    if(l == r) {
        for (int i = 0; i <= r; i++)
        {
           printf("%d\t",arr[i]);
        }
        printf("\n");
        return;
    }
    for(int i = l;i<=r;i++) {
        swap(&arr[l],&arr[i]);  //finding permuitation.
        permute(arr,l+1,r);
        swap(&arr[l],&arr[i]);  //back tracking.
    }
}
int main() {
    int arr[] ={1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    permute(arr,0,n-1);
}