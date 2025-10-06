#include<stdio.h>
#include<string.h>
char* Stringsort(char *input){
    
    int n=strlen(input);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(input[j]>input[j+1]){
                char temp=input[j];
                input[j]=input[j+1];
                input[j+1]=temp;
            }
        }
    }
    return input;
}
int main(){
    char input[50];
    scanf("%s",input);
    printf("%s",Stringsort(input));
    
    
    
}