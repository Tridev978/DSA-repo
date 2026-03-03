//CH.SC.U4AIE25069
//Doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
    struct node* prev;
};
typedef struct node node;
void insertStart(struct node **head,int data) {
    node *newNode=(node*)malloc(sizeof(node));
    newNode->data=data;
    newNode->next=*head;
    if(*head!=NULL) {
    (*head)->prev=newNode;
    }
    *head=newNode;
}
void display_forward(struct node *head) {
  node *temp=head;
  while(temp!=NULL) {
    printf("%d <->",temp->data);
    temp=temp->next;
  }
  printf("\n");
}
void display_backward(struct node *head) {
  node *temp=head;
  while(temp->next!=NULL)
    temp=temp->next;
  while(temp!=NULL) {
    printf("%d <->",temp->data);
    temp=temp->prev;
  }
}
int main() {
   node *head=NULL;
   int data,N;
   scanf("%d",&N);
   for(int i=0;i<N;i++) {
   scanf("%d",&data);
   insertStart(&head,data);
   }
    display_forward(head);
    display_backward(head);
}