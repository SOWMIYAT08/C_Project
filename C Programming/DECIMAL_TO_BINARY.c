#include<math.h>
#include <stdio.h>

int main()
{
   //decimal to binary
   int d;
   scanf("%d",&d);
   int bin[32]={0};
   int i=0;
   while(d!=0){
       int rem=d%2;
       bin[i]=rem;
       i++;
       d=d/2;
   }
   for(int j=3;j>=0;j--){
       printf("%d ",bin[j]);
   }
}
