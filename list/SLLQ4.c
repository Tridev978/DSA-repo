#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node node;
node *start=NULL;
void display(){
    node *temp=start;
    printf("Linked List:->");
    while(temp!=NULL){
        printf("%d",temp->data);
        if(temp->next!=NULL)
            printf("->");
        temp=temp->next;
    }
}
void insertBefore(int x,int val){
    node *temp=start,*p2=NULL,*p1;
    while(temp!=NULL && temp->data!=x){
        p2=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        printf("Node not found!\n");
        return;
    }
    p1=(node*)malloc(sizeof(node));
    p1->data=val;
    if(p2==NULL){
        p1->next=start;
        start=p1;
    }
    else{
        p1->next=temp;
        p2->next=p1;
    }
}
int main(){
    int n,x,search,val,i;
    node *temp,*newnode;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        newnode=(node*)malloc(sizeof(node));
        newnode->data=x;
        newnode->next=NULL;
        if(start==NULL)
            start=newnode;
        else{
            temp=start;
            while(temp->next!=NULL)
                temp=temp->next;
            temp->next=newnode;
        }
    }
    scanf("%d",&search);
    scanf("%d",&val);
    insertBefore(search,val);
    display();
    return 0;
}