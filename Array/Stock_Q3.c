#include<stdio.h>
int main() {
    int t,n;
    printf("Enter no. of test cases: ");
    scanf("%d",&t);
    for(int i=0;i<t;i++) {
        printf("Enter size of array %d: ",i+1);
        scanf("%d",&n);
         int a[n];
         printf("Enter cost of stocks: ");
        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
        }
        int i=0,found=0;
        while(i<n-1) {
        while(i<n-1 && a[i]>=a[i+1]) {
            i++;
        }
        if(i==n-1) {
            break;
        }
        int buy=i;
        i++;
        while(i<n && a[i]>=a[i-1]) {
            i++;
        }
        int sell=i-1;
        printf("(%d %d)",buy,sell);
        found=1;
      }
      if(found==0) {
        printf("No profit");
      }
    }

}