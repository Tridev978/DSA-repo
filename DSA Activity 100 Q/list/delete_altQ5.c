#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node node;
void display(node *head){
    node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void insert(struct node **head,int data) {
    node *newNode=(node*)malloc(sizeof(node));
    newNode->data=data;
    newNode->next=NULL;
    if(*head==NULL) {
       *head=newNode;
    }
    else {
    node *temp = *head;
    while(temp->next!=NULL) {
        temp=temp->next;
    }
    temp->next=newNode;
}
}
void delete_Alt(struct node **head) {
     if(*head == NULL || (*head)->next == NULL)
        return;
    node *a= *head;
    node *b;
    while(a!=NULL && a->next!=NULL) {
        b=a->next;
        a->next=b->next;
        free(b);
        a=a->next;
    }
}
int main() {
    node *head=NULL;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
    insert(&head,i+1);
    }
    delete_Alt(&head);
    display(head);
}
