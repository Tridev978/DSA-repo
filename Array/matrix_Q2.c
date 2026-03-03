#include<stdio.h>
int main() {
    int p,q;
    printf("Enter p: ");
    scanf("%d",&p);
    printf("Enter q: ");
    scanf("%d",&q);
    char arr[p][q],ch='Y';
    int top=0,right=q-1,bottom=p-1,left=0;
    while(top<=bottom&&right>=left) {
        for(int i=left;i<=right;i++) {
            arr[top][i]=ch;
        }
        for(int i=left;i<=right;i++) {
            arr[bottom][i]=ch;
        }
        for(int i=top+1;i<=bottom-1;i++) {
            arr[i][right]=ch;
        }
        for(int i=top+1;i<=bottom-1;i++) {
            arr[i][left]=ch;
        }
        top++;bottom--;left++;right--;
        ch=(ch=='Y')? '0':'Y';
    }
    printf("array: \n");
    for(int i=0;i<p;i++) {
        for(int j=0;j<q;j++) {
            printf("%c\t",arr[i][j]);
        }
        printf("\n");
    }
}