//CH.SC.U4AIE25069
//Insert,delete and display dynamic array while changing size and capacity accordingly.
#include<stdio.h>
#include<stdlib.h>
int *arr,n=0,capacity=2;
void resize(int newcapacity) {
    arr=(int*)realloc(arr,newcapacity*sizeof(int));
    capacity=newcapacity;
}
void insert() {
    int element;
    printf("Enter element to be inserted: ");
    scanf("%d",&element);
    if(n==capacity) {
        resize(2*capacity);
    }
    arr[n++]=element;
}
void delete() {
    int index;
    printf("Enter the index of number to be deleted: ");
    scanf("%d",&index);
    if(index<0 || index>n) {
    printf("Invalid index! ");
    return;
    }
    for(int i=index;i<n-1;i++) {
        arr[i]=arr[i+1];
    }
    n--;
    if(n<capacity/2 && capacity>2) {
        resize(capacity/2);
    }
}
void display() {
    for(int i=0;i<n;i++) {
        printf("%d\t",arr[i]);
    }
}
int main() {
    int ch;
    arr=(int*)malloc(capacity*sizeof(int));
    if(arr==NULL) {
        printf("memory allocation failed! ");
        return 1;
    }
    printf("......Menu......\n");
    printf("1.insert.\n 2.delete.\n3.display\n4.exit");
    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch) {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            free(arr);
            return 0;
        }
        printf("\nCapacity and size of array currently are: %d %d",capacity,n);
    }
}