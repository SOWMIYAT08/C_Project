#include<stdio.h>
int main(){
    int a[5]={0,79,45,32,1000};//bubble 
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){// j=0;j<n-i-1;j++
            if(a[j]>a[j+1]){  // a[j]>a[j+1]
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}