#include<stdio.h>
#include<math.h>
int main(){
    //octal to decimal
    int oct;
    scanf("%d",&oct);
    int power=0,i=0;
    while(oct!=0){
        int rem=oct%10;
        power=power+(rem*pow(8,i));
        i++;
        oct/=10;
        
    }
    printf("%d",power);
    
}