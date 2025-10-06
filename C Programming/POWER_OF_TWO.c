#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1,c=0;
    while(pow(2,i)<=n){
        int power=pow(2,i);
        if(power==n){
            c++;
    
        }
        i++;
        }
        if(c>0){
            printf(" power of 2");
        }else{
            printf("not a power of 2");
        }
            
    
}