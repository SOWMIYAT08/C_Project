#include<stdio.h>
#include<string.h>
int main(){
    char s1[25];
    char s2[25];
    scanf("%[^\n]s",s1);
    getchar();
    scanf("%[^\n]s",s2);
    char temp;
    for(int i=0;i<strlen(s1);i++){
        for(int j=i+1;j<strlen(s1);j++){
            if(s1[i]>s1[j]){
                temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
            }
        }
    }
    for(int i=0;i<strlen(s2);i++){
        for(int j=i+1;j<strlen(s2);j++){
            if(s2[i]>s2[j]){
                temp=s2[i];
                s2[i]=s2[j];
                s2[j]=temp;
            }
        }
    }
    if(strcmp(s1,s2)==0){
        printf("yes");
    }
    else{
        printf("no");
    }
    
}