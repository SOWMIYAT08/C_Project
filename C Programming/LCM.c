#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=4,b=6;
    int res=0;
    for(int i=1;i<b;i++){
        if(a%i==0 && b%i==0){
            res=i;
        }
    }
    printf("%d\n",res);
    int lcm=abs(a*b)/res;
    printf("%d",lcm);
}