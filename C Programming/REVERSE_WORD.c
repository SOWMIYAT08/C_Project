#include<string.h>
#include <stdio.h>
void reverse(char *str){
    int len=strlen(str);
    for(int i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
    printf(" ");
    }
int main()
{
    char s[50];
    scanf("%[^\n]s",s);
    char *token;
    char *word[50];
    token=strtok(s," ");
    int c=0;
    while(token!=NULL){
        
        word[c]=token;
        c++;
        token=strtok(NULL," ");
    }
    for(int i=0;i<c;i++){
       reverse(word[i]);
    }

    return 0;
}