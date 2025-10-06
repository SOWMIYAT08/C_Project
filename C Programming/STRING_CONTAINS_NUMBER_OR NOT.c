#include<stdio.h>
#include<string.h>
int main(){
    char s[25];
    scanf("%s",s);
    int c=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]>=48 && s[i]<=57){
            c++;
        }
    }
   
    if(c==strlen(s)){
        printf("yes");
    }
    else{
        printf("no");
    }
}