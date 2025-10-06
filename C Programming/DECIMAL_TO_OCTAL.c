#include<stdio.h>
#include<math.h>
int main(){
    //decimal to octal
    int d;
    scanf("%d",&d);
    int oct[8],i=0;
    while(d!=0){
        int rem=d%8;
        oct[i]=rem;
        i++;
        d/=8;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",oct[j]);
    }
}