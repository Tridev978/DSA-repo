#include<stdio.h>
int main() {
    int t,m,n,x1,y1,x2,y2,sum;
    scanf("%d",&t);
    scanf("%d %d",&m,&n);
    int C[m][n];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++)
        scanf("%d",&C[i][j]);
    }
for(int k=0;k<t;k++) {
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    sum=0;
    for(int i=x1-1;i<x2;i++) {
        for(int j=y1-1;j<y2;j++) {
              sum+=C[i][j];
        }
    }
    printf("%d\n",sum);
}
}