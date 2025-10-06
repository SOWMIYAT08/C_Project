#include<string.h>
#include <stdio.h>
#include<ctype.h>
int main()
{
    char s[25];
    fgets(s,sizeof(s),stdin);
    int len=strlen(s);
    int freq[len];
    int j=0;
    char s1[25];
    for(int i=0;i<len;i++){
        if(s[i]!=' ' && s[i]!='\n'){
            s1[j]=s[i];
            freq[j]=1;
            j++;
        }
    }
    int n=j;
    for(int i=0;i<n;i++){
        if(freq[i]==0){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(freq[j]==0){
                continue;
            }
            if(s1[i]==s1[j]){
                freq[i]++;
                freq[j]=0;
            }
        }
        
    }
    for(int i=0;i<n;i++){
        if(freq[i]!=0){
            printf("%c\n",s1[i]);
        }
    }
    
    
    
    
}
