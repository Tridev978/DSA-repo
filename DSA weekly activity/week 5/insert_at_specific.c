//CH.SC.U4AIE25069
//To insert element at a specific position.
#include<stdio.h>
#include<stdlib.h>
int n,capacity;
int* insert(int *arr, int pos, int element) {
    if(capacity==n) {
        capacity*=2;
    }
    int* b = realloc(arr, capacity*sizeof(int));
    for (int i=n; i>pos;i--) {
        b[i] = b[i-1];
    }
    b[pos] = element;
    n++;
    return b;
}
int main() {
    int pos, element;
    printf("Enter n: ");
    scanf("%d", &n);
    capacity= n<0? 2:n;
    int* arr = malloc(capacity*sizeof(int));
    if (arr==NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter position and element to be inserted: ");
    scanf("%d %d", &pos, &element);
    if (pos<0 || pos>n) {
        printf("Invalid position\n");
        free(arr);
        return 1;
    }
    arr=insert(arr,pos,element);
    printf("Array after insertion: ");
    for (int i=0; i<n; i++) {
        printf("%d\t", arr[i]);
    }
    free(arr);
}
