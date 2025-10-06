#include<stdio.h>
#include<string.h>
int main(){
    //hexadeimal ton decimal
    char hexa[16];
    scanf("%s",hexa);
    int decimal=0;
    int n=strlen(hexa);
    for(int i=0;i<n;i++){
        int value;
        if(hexa[i]>='0' && hexa[i]<='9'){
            value=hexa[i]-'0';
        }
        else if(hexa[i]>='A' && hexa[i] <='F'){
            value=hexa[i]-'A'+10;
        }
        decimal=decimal*16+value;
    }
    printf("%d",decimal);
    
}