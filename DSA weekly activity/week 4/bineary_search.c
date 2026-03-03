//CH.SC.U4AIE25069
//Binary search.
//Time complexity:- O(log(n)).
#include<stdio.h>
void search(int arr[],int l,int r,int key) {
    if(l>r) {
        printf("key is not found in array.");  //Checks if the element is present or not.
        return;
    }
        int mid = (l+r)/2;
        if(key == arr[mid]) {
            printf("The key is at position %d in array.",mid);
            return;
        }
        else if(key<arr[mid]) {
            search(arr,l,mid-1,key);  
        }
        else {
            search(arr,mid+1,r,key);
        }

}
int main() {
    int l=0,r,mid,n,key;     //Here l is left side  and r stands for right side of array.
    printf("Enter search key: ");
    scanf("%d",&key);
    int arr[] ={1,2,3,4,5};      //Using sorted array.
    n = sizeof(arr)/sizeof(arr[0]);  //checks the size of array.
    r = n-1;
    search(arr,l,r,key);
}