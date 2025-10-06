#include<stdio.h>
int main(){
    int a=0,b=25;
    int res=0;
    for(int i=1;i<=b;i++){
        if(a%i==0 && b%i==0){
            res=i;
        }
    }
    printf("%d",res);
}