//CH.SC.U4AIE25069
/*To implement a sorted insertion operation in a circular singly linked list, 
where each new element is inserted into its correct position 
so that the list remains in ascending order.*/
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void empty(struct node **head_ref,struct node*newNode) {
      newNode->next=newNode;
      *head_ref=newNode;
}
void sortedInsert(struct node **head_ref,struct node *new_node) {
     struct node *present;
    if(*head_ref==NULL) {
        empty(head_ref,new_node);
        return;
    }
    if(new_node->data <= (*head_ref)->data) {
    present=*head_ref;
    while(present->next!= *head_ref) {
        present=present->next;
    }
    present->next=new_node;
    new_node->next= *head_ref;
    *head_ref=new_node;
    }
    else {
    present=*head_ref;
while(present->next!= *head_ref && present->next->data < new_node->data) {
    present=present->next;
}
new_node->next=present->next;
present->next=new_node;
    }
}
void display(struct node *head) {
    if(head=NULL) {
        printf("List empty");
        return;
    }
     struct node *temp=head;
     do {
        printf("%d ",temp->data);
        temp=temp->next;
     }while(temp!=head);
}
int main() {
    struct node *head=NULL;
    int x,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
    scanf("%d",&x);
    struct node*newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=x;
    sortedInsert(&head,newNode);
    }
    display(head);
}