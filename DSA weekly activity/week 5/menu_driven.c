//CH.SC.U4AIE25069
//Menu driven for insert,delete,search,update,display and exit.
#include<stdio.h>
#include<stdlib.h>
int *arr,n,capacity;
void resize(int newcapacity) {
    if(capacity<2)
       capacity=2;
       arr=(int*)realloc(arr,newcapacity*sizeof(int));
       capacity=newcapacity;
}
void insert() {
    int pos,element;
      printf("Enter position and element to be inserted: ");
      scanf("%d %d",&pos,&element);
      if(n==capacity) {
        resize(2*capacity);
      }
      n++;
      for(int i=n;i>pos;i--)
      arr[i]=arr[i-1];
      arr[pos]=element;
}
void delete() {
      int element,found=0;
      printf("Enter element to be deleted: ");
      scanf("%d",&element);
      for (int i = 0; i < n; i++)
      {
        if(arr[i]==element) {
            found=1;
            for (int j= i; j < n; j++)
            {
                arr[j]=arr[j+1];
            }
            n--;
            break;
        }
      }
      if(found==0)
      printf("not found");
      if(n>0 && n<=capacity/4) {
        resize(capacity/2);
      }
}
void search() {
    int key,found=0;
    printf("Enter search element: ");
    scanf("%d",&key);
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key) {
        found=1;
        printf("key found at index: %d",i);
        }
    }
    if(!found) 
    printf("The key element is not in array. ");
}
void update() {int pos,value;
    printf("Enter position and new element to be updated: ");
    scanf("%d %d",&pos,&value);
    arr[pos]=value;
}
void display() {
    for(int i=0;i<n;i++)
    printf("%d\t",arr[i]);
}
int main() {
    int ch=0;
    printf("....menu driven.....\n");
    printf("1.Insert element.\n 2.Delete element.\n3.Search element.\n4.Update\n5.Display\n6.Exit");
    printf("\nEnter size of array: ");
    scanf("%d",&n);
    capacity=n;
    arr=(int*)malloc(n * sizeof(int));
    if(arr==NULL) printf("memory allocation failed");
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    while(1) {
    printf("\nEnter the desired operation: ");
    scanf("%d",&ch);
    switch(ch) {
        case 1:
        insert();
        break;
        case 2:
        delete();
        break;
        case 3:
        search();
        break;
        case 4:
        update();
        break;
        case 5:
        display();
        break;
        case 6:
        free(arr);
        return 0;
        default:
        printf("wrong choice!");
    }
    printf("\n size and capacity are %d and %d respectively",n,capacity);
    }
}