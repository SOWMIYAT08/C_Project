#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n-1;j++){
    for(int i=0;i<n-1;i++){
        if(a[i]==0 && a[i+1]!=0){
           int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
        
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
}