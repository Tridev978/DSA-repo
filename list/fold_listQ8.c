#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
typedef struct node node;
void create(struct node **head,int data) {
    node *newNode=(struct node*)malloc(sizeof(node));
    newNode->data=data;
    newNode->next=NULL;
   if(*head==NULL) {
      *head=newNode;
      return;
   }
   node *temp=*head;
   while(temp->next!=NULL) {
    temp=temp->next;
   }
   temp->next=newNode;
}
node* reverse(struct node *mid) {
    struct node *curr=mid,*prev=NULL;
   while(curr!=NULL) {
      node *next=curr->next;
      curr->next=prev;
      prev=curr;
      curr=next;
   }
   return prev;
}
void fold(struct node **head) {
    if(*head==NULL ||(*head)->next==NULL) {
        return;
    }
    struct node *slow=*head;
    struct node *fast=*head;
    while(fast->next!=NULL && fast->next->next!=NULL) {
        slow=slow->next;
        fast=fast->next->next;
    }
    struct node *second=slow->next;
    slow->next=NULL;
    second=reverse(second);
    struct node *first=*head;
    while(second!=NULL) {
        node *temp1=first->next;
        node *temp2=second->next;
        first->next=second;
        second->next=temp1;
        first=temp1;
        second=temp2;
    }
}
void print(struct node *head) {
    node *temp=head;
    printf("Linked List: ");
    while(temp!=NULL) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main() {
    struct node *head=NULL;
    int data,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
    scanf("%d",&data);
    create(&head,data);
    }
    printf("Linked list before folding: \n");
    print(head);
    fold(&head);
    printf("\n Linked list after folding: \n");
    print(head);
}