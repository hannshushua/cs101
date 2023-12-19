#include <stdio.h>

int main(){
    double PI = 4.0;
    int x = 0;
    int tp = 1;
    long RPI = 0;
    double sum;

    for (int i = 3; i <= 1000000; i+=2 , tp++){
        (tp&0x01) ? (PI-=(4.0/i)) : (PI+=(4.0/i));
        RPI = PI * 100000;

        if(RPI == 314159){
            x = i ;
            break;
        }
    }
    
    printf("%.5f\n", PI);
    printf("%d",x); // x = 272241次
    
    return 0;
}
