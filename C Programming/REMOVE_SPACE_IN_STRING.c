#include<stdio.h>
#include<string.h>
int main(){
    char s[40];
    scanf("%[^\n]s",s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]==' '){
            continue;
        }
        printf("%c",s[i]);
    }
}