#include<string.h>
#include <stdio.h>
#include<math.h>
int main()
{
   int b;
   scanf("%d",&b);
   int i=0,power=0;
   while(b!=0){
       int rem=b%10;
       power=power+(rem*pow(2,i));
       b/=10;
       i++;
   }
   int decimal=power;
   char hexa[50];
   int z=0;
   while(decimal!=0){
       int rem=decimal%16;
       if(rem<10){
           hexa[z]=rem+'0';
       }
       else{
           hexa[z]=rem-10+'A';
       }
       z++;                       
       decimal/=16;
   }
   for(int j=z-1;j>=0;j--){
       printf("%c",hexa[j]);
   }
    
}
