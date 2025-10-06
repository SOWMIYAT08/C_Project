#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n]; 
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int r=2;
    for(int i=0;i<r;i++){
        for(int j=0;j<n-1;j++){
           int temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    
}