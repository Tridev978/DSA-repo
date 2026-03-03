#include<stdio.h>
#include<stdlib.h>
struct n {
    int data;
    struct n *next;
};
void insert(struct n **head,int data) {
    struct n *newNode=(struct n*)malloc(sizeof(struct n));
    newNode->data=data;
    newNode->next=NULL;
  if(*head==NULL) {
    *head=newNode;
    (*head)->next=newNode;
    return;
  }
  struct n*temp=*head;
  while(temp->next!=*head) {
    temp=temp->next;
  }
  temp->next=newNode;
  newNode->next=*head;
}
void display(struct n *head) {
    struct n *temp=head;
    printf("[h]=>");
    do {
        printf("%d ",temp->data);
        if(temp->next!=head)
            printf("=>");
        temp=temp->next;
    } while(temp!=head);
    printf("=>[h]");
    printf("\n");
}
int main() {
  int n;
  struct n *odd=NULL, *even=NULL;
  struct n *head=NULL;
  scanf("%d",&n);
  for(int i=1;i<=n;i++) {
    insert(&head,i);
    if(i%2==0) {
        insert(&even,i);
    }
    else {
        insert(&odd,i);
    }
  }
  printf("Complete linked_list:\n");
  display(head);
  printf("odd: \n");
  display(odd);
  printf("even: \n");
  display(even);
}