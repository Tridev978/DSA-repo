//CH.SC.U4AIE25069
//Dollor maths
#include<stdio.h>
#define MAX 6
#define LEN 30
void printResult(char names[MAX][LEN], int afford[], int items, int remainder, int bought)
{
    for(int i=0;i<items;i++)
        printf("I %s afford %s\n", afford[i] ? "can" : "can't", names[i]);
    if(bought==0)
        printf("I need more Dollar!");
    else
        printf("%d",remainder);
}
int main() {
    char names[MAX][LEN];
    int price[MAX], items, dollar,afford[MAX]={0}, index[MAX];
    int bought=0, remainder;
    scanf("%d %d",&dollar,&items);
    for(int i=0;i<items;i++) {
        scanf("%s %d",names[i],&price[i]);
        index[i]=i;
    }
    for(int i=0;i<items-1;i++)
        for(int j=i+1;j<items;j++)
     if(price[index[i]] > price[index[j]]) {int t=index[i]; index[i]=index[j]; index[j]=t;}
     remainder=dollar;
    for(int i=0;i<items && price[index[i]]<=remainder;i++) {
        afford[index[i]]=1;
        remainder-=price[index[i]];
        bought++;
    }
    printResult(names,afford,items,remainder,bought);
}
