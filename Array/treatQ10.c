//CH.SC.U4AIE25069
/*To determine the minimum total number of treats 
required to distribute among animals based on their sizes*/
#include<stdio.h>
# define MAXN 101
int s[MAXN];
void sol() {
    int n;
    scanf("%d",&n);
    int treat=1,total_treat=1;
    for(int i=0;i<n;i++) {
        scanf("%d",&s[i]);
    }
    for(int i=0;i<n;i++) {
     for(int j=i+1;j<n;j++) {
        if(s[i]>s[j]) {
            int temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
     }
    }
    for(int i=1;i<n;i++) {
        if(s[i]>s[i-1]) {
            treat++;
        }
        total_treat+=treat;
    }
    printf("%d\n",total_treat);
}
int main() {
    int t;
    scanf("%d",&t);
    while(t>0) {
        sol();
        t--;
    }
}