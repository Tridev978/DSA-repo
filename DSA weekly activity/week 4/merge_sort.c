//CH.SC.U4AIE25069
//merge sort.
//Time complexity: O(nlog(n)).
#include<stdio.h>
void merge(int arr[],int left,int right,int mid) {
    int i,j,k,b[right-left+1];
    i = left; j=mid+1; k=0;
    while(i<=mid && j<=right) {
        if(arr[i]<=arr[j]) {    //Sorting array.
            b[k++] = arr[i++];   
        }
        else {
            b[k++] = arr[j++];
        }
    }
    while(i<=mid) {
        b[k++]=arr[i++];     //adding extra elements in array.
    }
    while(j<=right) {
        b[k++] = arr[j++];
    }
    for(i=left,k=0;i<=right;i++,k++) {
        arr[i] = b[k];                 //coping array.
    }
}
void merge_sort(int arr[],int left,int right) {
    if(left<right) {
    int mid = (left+right)/2;
    merge_sort(arr,left,mid);
    merge_sort(arr,mid+1,right);    //dividing array into n/2.
    merge(arr,left,right,mid);
    }
}
int main() {
    int arr[] = {1,3,4,5,2,8,7,41,55,99};
    int n = sizeof(arr)/sizeof(arr[0]),i;
    merge_sort(arr,0,n-1);
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }   
}