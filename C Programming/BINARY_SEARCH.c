#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   
    int key,c=0;
    printf("key:");
    scanf("%d",&key);
    
    int low=0,high=n-1;
   
    while(low<=high){
        
    int mid=(low+high)/2;
   
    if(a[mid]==key){
         c=1;
         break;
    }
    else if(a[mid]<key){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
    
    }
    
    if(c==1) printf("found");
    else printf("nf");
    
    return 0;

}