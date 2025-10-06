
#include <stdio.h>
#include<math.h>
int main()
{
    //binary to decimal 
    int b;
    scanf("%d",&b);
    int power=0,i=0;
    while(b!=0){
        int rem=b%10;
        power=power+(rem*pow(2,i));
        b/=10;
        i++;
    }
    printf("dcimal value is : %d",power);
}
