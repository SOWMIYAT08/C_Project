#include<stdio.h>
#include<string.h>
int main(){
    char a[30]="sowmiya";
    int len=strlen(a);
    char a1[30];
    for(int i=0;i<len;i++){
        a1[i]=a[i];
    }
    for(int i=0;i<len;i++){
        printf("%c",a1[i]);
    }
}