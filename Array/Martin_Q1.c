// CH.SC.U4AIE25069
// Arabic to Martin numerecal system.
#include<stdio.h>
void convert(int n) {
    char buf[30];
    int i=0;
    if(n>=900) {
        buf[i++]='B';
        buf[i++]='R';
        n-=900;
    }
    else if(n>=500) {
       buf[i++]='G';
       n-=500;
    }
    else if(n>=400) {
        buf[i++]='B';
        buf[i++]='G';
        n-=400;
    }
    while(n>=100) {
        buf[i++]='B';
        n-=100;
    }
    if(n>=90)  {
        buf[i++]='Z';
        buf[i++]='B';
        n-=90;
    }
    else if (n>=50)
    {
     buf[i++]='P';
     n-=50;
    }
    else if (n>=40)
    {
     buf[i++]='Z';
     buf[i++]='P';
     n-=40;
    }
    while (n>=10)
    {
        buf[i++]='Z';
        n-=10;
    }
     if(n>=9)  {
        buf[i++]='B';
        buf[i++]='Z';
        n-=9;
    }
    else if (n>=5)
    {
     buf[i++]='W';
     n-=5;
    }
    else if (n>=4)
    {
     buf[i++]='B';
     buf[i++]='W';
     n-=4;
    }
    while (n>=1)
    {
        buf[i++]='B';
        n-=1;
    }
    buf[i]='\0';
    printf("%s\n",buf);
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++) {
    convert(arr[i]);
    }
}