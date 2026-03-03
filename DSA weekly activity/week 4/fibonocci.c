//CH.SC.U4AIE25069
//To print n fibanonci series.
//Time Complexity:- O(2^n).
#include<stdio.h>
int fib(int n) {
    if(n == 0 || n == 1) {
        return 1; //Base case.
    }
    else
    return fib(n-1) + fib(n-2);  //Recursive function.
}
int main() {
    int i,n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    printf("%d ",fib(i));  //Printing fibonocci series.
}