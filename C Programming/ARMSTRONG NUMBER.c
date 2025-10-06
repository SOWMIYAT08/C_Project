#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int temp=n;
    scanf("%d",&n);
    int c=0;
    while(n!=0){
        c++;
        n/=10;
    }
    int power=0;
    while(temp!=0){
        int rem=temp%10;
        int power=+pow(rem,c);
        temp/=10;
    }
    if(power==temp){
        printf("It is a Armstrong number");
    }
    else{
        printf("not a Armstrong number");
    }
}