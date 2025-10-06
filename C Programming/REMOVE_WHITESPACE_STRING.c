#include<stdio.h>
#include<string.h>
int main(){
    char s[10];
    scanf("%[^\n]s",s);
    for(int i=0;i<=strlen(s);i++){
        if(s[i]!=' '){
            printf("%c",s[i]);
        }
        else{
            continue;
        }
    }
}