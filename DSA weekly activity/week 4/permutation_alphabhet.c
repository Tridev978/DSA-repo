#include<stdio.h>
void swap(char *a,char *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void permute(char ch[],int l,int r) {
    if(l == r) {
        for (int i = 0; i <= r; i++)
        {
           printf("%c  ",ch[i]);
        }
        printf("\n");
        return;
    }
    for(int i = l;i<=r;i++) {
        swap(&ch[l],&ch[i]);
        permute(ch,l+1,r);
        swap(&ch[l],&ch[i]);
    }
}
int main() {
    char ch[] ="ABC";
    permute(ch,0,2);
}