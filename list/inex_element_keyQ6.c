#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
typedef struct node node;
void insert(node **head,int data) {
     node *newNode=(node*)malloc(sizeof(node));
     newNode->data=data;
     newNode->next= *head;
     *head=newNode;
}
void getNth(node *head,int index) {
      int i=index;
      node *temp=head;
      while(i>1) {
        temp=temp->next;
        i--;
      }
      printf("\n %d:%d",index,temp->data);
}
void display(node *head) {
    node *temp=head;
    printf("linked list:--> ");
    while(temp!=NULL) {
        printf("%d ",temp->data);
        if(temp->next != NULL) {
          printf("-->");
        }
        temp=temp->next;
    }
}
int main() {
  int data,n,index;
  node *head=NULL;
  scanf("%d",&n);

  for(int i=0;i<n;i++) {
    scanf("%d",&data);
    insert(&head,data);
  }
  scanf("%d",&index);
  display(head);
  getNth(head,index);
}