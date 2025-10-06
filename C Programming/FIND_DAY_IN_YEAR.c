#include<stdio.h>
int main(){
    int base=2001;
    int y;
    scanf("%d",&y);
    int normalday=0;
    if(y>base){
        for(int i=base;i<y;i++){
            if((base%400==0)|| (base%4==0 && base%100!=0)){
                normalday+=2;
            }
            else{
                normalday+=1;
            }
        }
    }
    else if(y<base){
        for(int i=y; i<base;i++){
            for(int i=base;i<y;i++){
            if((base%400==0)|| (base%4==0 && base%100!=0)){
                normalday-=2;
            }
            else{
                normalday-=1;
            }
        }
        }
    }
    int finalday=(base+normalday)%7;
    if(finalday<0){
        finalday+=7;
    }
    switch(finalday) {
    case 0: printf("Sunday\n"); break;
    case 1: printf("Monday\n"); break;
    case 2: printf("Tuesday\n"); break;
    case 3: printf("Wednesday\n"); break;
    case 4: printf("Thursday\n"); break;
    case 5: printf("Friday\n"); break;
    case 6: printf("Saturday\n"); break;
}

    
}