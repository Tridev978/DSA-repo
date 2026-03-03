#include<stdio.h>
int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c],arrTemp[r][c];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
        scanf("%d",&arr[i][j]);
        arrTemp[i][j]=arr[i][j];
        }
    }
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            if(arr[i][j]==1) {
                for(int n=0;n<r;n++)
                arrTemp[n][j]=1;
                for(int m=0;m<c;m++)
                arrTemp[i][m]=1;
            }
        }
    }
    printf("\n");
    for(int i=0;i<r;i++) {
    for(int j=0;j<c;j++) {
    printf("%d ",arrTemp[i][j]);
        }
        printf("\n");
    }
}