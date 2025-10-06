#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=1;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("max: %d\n",max);
    int min=a[0];
    for(int i=1;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("min: %d\n",min);
    for(int i=min;i<=max;i++){
        int found=0;
        for(int j=0;j<n;j++){
            if(i==a[j]){
              found=1;
              break;
            }
        }
        if(found==0){
            printf("%d",i);
        }
    }
}