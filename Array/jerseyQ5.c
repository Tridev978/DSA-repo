//CH.SC.U4AIE25069
//To read integer from 0 - 12 and display their spell in  alphabetical order
#include <stdio.h>
int main() {
    int n;
    char names[13][256]={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE","TEN","ELEVEN","TWELVE"};
    int input[100];
    int freq[27]={0};
    int count=0;
    while(1) {
       scanf("%d",&n);
       if(n==999){
        break;
       }
       input[count++]=n;
       if(n>=0 && n<=12) {
     for(int i=0;names[n][i]!='\0';i++) {
        freq[names[n][i]-'A']++;
     }
}
}
  for(int i=0;i<count;i++) {
        printf("%d  ",input[i]);
       }
       printf("0999. ");
       for(int n=0;n<26;n++) {
        while(freq[n]>0) {
             printf("%c ",n+'A');
             freq[n]--;
        }
       }
}