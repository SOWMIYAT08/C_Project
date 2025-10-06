#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    scanf("%s",str);
    for(int i=0;str[i]!=0;i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    int digit=0,character=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='0' && str[i]<='9'){
            digit++;
        }
        else if(str[i]>='A'&& str[i]<='Z'){
            character++;
        }
    }
    int length=strlen(str);
    int special=length-(digit+character);
    printf("special character: %d\n",special);
    printf("digits : %d\n",digit);

    
}