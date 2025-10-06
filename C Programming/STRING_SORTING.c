#include<stdio.h>
#include<string.h>
int main(){
    char s[25];
    scanf("%s",s);
    char temp;
    for(int i=0;i<strlen(s);i++){
        for(int j=i+1;j<strlen(s);j++){
        if(s[i]>s[j]){
           temp=s[i];
           s[i]=s[j];
           s[j]=temp;
        }
    }
    }
    for(int i=0;i<strlen(s);i++){
        if(s[i]!=s[i+1]){
            printf("%c",s[i]);
        }
    }
}