#include<stdio.h>
#include<string.h>
int main(){
    char str[10];
    scanf("%[^\n]s",str);
  for(int i=0;str[i]!='\0';i++){
      if(str[i]>='A'&& str[i]<='Z'){
        str[i]=str[i]+32;
      }
  }
    printf("%s",str);
    int c=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            c++;
        }
    }
    printf("%d",c);
}