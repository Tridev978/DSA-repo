#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void create(struct node **head,int data) {
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=NULL;
    if(*head==NULL) {
        *head=newNode;
        return;
    }
    struct node *temp= *head;
    while(temp->next!=NULL) {
        temp=temp->next;
    }
    temp->next=newNode;
}
void del(struct node **head,int n) {
    while(n > 0 && *head != NULL) {
        struct node *temp = *head;
        *head = (*head)->next;
        free(temp);
        n--;
    }
}
void display(struct node *head) {
  struct node *temp=head;
  printf("Linked list: ->");
  while(temp!=NULL) {
    printf("%d ",temp->data);
    if(temp->next!=NULL)
        printf("->");
    temp=temp->next;
  }
}
int main() {
  struct node *head=NULL;
  int n,data,delete;
  scanf("%d",&n);
  for(int i=0;i<n;i++) {
    scanf("%d",&data);
    create(&head,data);
  }
  scanf("%d",&delete);
  del(&head,delete);
  display(head);
}