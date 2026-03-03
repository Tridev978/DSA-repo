//CH.SC.U4AIE25069
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
typedef struct node node;
node *head=NULL;
void create(int x) {
    node *newNode=(struct node*)malloc(sizeof(node));
    newNode->data=x;
    newNode->next=NULL;
   if(head==NULL) {
      head=newNode;
      return;
   }
   node *temp=head;
   while(temp->next!=NULL) {
    temp=temp->next;
   }
   temp->next=newNode;
}
void del(int x) {
    node *p1=head;
    while(p1!=NULL && p1->data!=x)
         p1=p1->next;
    if(p1==NULL) {
        printf("Invalid node! ");
        return;
    }
    while(head!=p1) {
         node *temp=head;
         head=head->next;
         free(temp);
    }
}
void display() {
    node *temp=head;
    printf("Linked List:-> ");
    while(temp!=NULL) {
        printf("%d ",temp->data);
        if(temp->next!=NULL) {
            printf("->");
        }
        temp=temp->next;
    }
}
int main() {
   int n,x,del_before;
   scanf("%d",&n);
   for(int i=0;i<n;i++) {
    scanf("%d",&x);
    create(x);
   }
   scanf("%d",&del_before);
   del(del_before);
   display();
}