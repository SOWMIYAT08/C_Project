#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[32];
    int i=0;
    while(n>0){
        a[i]=n%2;
        n=n/2;
        i++;
    }
    int c=0;
    for(int j=0;j<=i ;j++){
        if(a[j]==1){
            c++;
        }
        else{
            continue;
        }
    }
    printf("number of bit 1 is: %d",c);
}