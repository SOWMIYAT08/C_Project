#include<stdio.h>
int reversenum(int n){
    static int rev=0;
    if(n==0) return rev;
    rev=rev*10+(n%10);
    return reversenum(n/10);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",reversenum(n));
}