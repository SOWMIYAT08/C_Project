#include<stdio.h>
#include<string.h>
int main(){
    char st[10];
    scanf("%[^\n]s",st);
   // int length=strlen(st);
    //printf("%d",length);
    int c=0;
    for(int i=0;st[i]!='\0';i++){
        c++;
    }
    printf("%d",c);
}