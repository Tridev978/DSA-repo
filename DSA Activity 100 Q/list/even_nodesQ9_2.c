#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void insert(struct node **head,int data,int *node) {
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=NULL;
    if(*head==NULL) {
        *head=newNode;
        (*head)->next=newNode;
        (*node)++;
        return;
    }
    struct node *temp= *head;
    while(temp->next!=*head) {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=*head;
    (*node)++;
}
void del_last(struct node **head) {
     if(*head==NULL)
        return;
        struct node *temp=*head;
        while(temp->next->next!=*head) {
            temp=temp->next;
        }
        temp->next=*head;
        free(temp->next);
}
void display(struct node *head) {
    struct node *temp=head;
    do {
        printf("%d->",temp->data);
        temp=temp->next;
    }while(temp!=head);
}
int main() {
    struct node *head=NULL;
    int node=0,n;
    scanf("%d",&n);
    for(int i=1;i<n;i++) {
    insert(&head,i,&node);
    }
    if(node%2!=0) {
        del_last(&head);
    }
    display(head);
}