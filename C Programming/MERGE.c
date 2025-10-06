#include<stdio.h>
#include<string.h>
int main(){
    int a[5]={1,2,3,4,5};
    int a1[5]={6,7,8,9,10};
    int m[10];
    int i;
    for(i=0;i<5;i++){
        m[i]=a[i];
    }
    printf("%d \n",i);
    for(int j=0;j<5;j++){
        m[i+j]=a1[j];
    }
    for(int i=0;i<10;i++){
        printf("%d ",m[i]);
    }
}