#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int b[32];
    int i=0;
    while(n>0){
        b[i]=n%2;
        n/=2;
        i++;
    }
    printf("%d",i);
    for(int j=i-1;j>0;j--){
        if(b[j]==1){
            printf("position = %d",j);
            break;
        }
    }
}