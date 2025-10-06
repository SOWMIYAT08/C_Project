#include<stdio.h>
#include<string.h>
int main(){
    char s[30];
    scanf("%[^\n]s",s);
    int c=1;
    for(int i=0;i<strlen(s);i++){
        if(s[i]==' '){
            c++;
        }
    }
    printf("%d",c);
}