#include<string.h>
#include <stdio.h>

int main()
{
   char arr[50][50];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",arr[i]);
    }
    char temp[50];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(arr[i],arr[j+1])>0){
                strcpy(temp, arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}
    /*
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(strcmp(arr[j],arr[j+1])>0){
               strcpy(temp,arr[j]);
               strcpy(arr[j],arr[j+1]);
               strcpy(arr[j+1],temp);
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
    return 0;
}*/