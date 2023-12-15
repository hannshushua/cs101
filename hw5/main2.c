#include <stdio.h>

int main(){
    double PI = 0.0;
    int x = 0;
    double sum;

    for (int i = 0; i <= 100000; i++){
        
        sum = 1.0 / (2 * i + 1);
        
        if(i % 2){
            PI -= sum;
        }else{
            PI += sum;
        }
    
        if((int)(PI * 4 * 100000) == 314159){
                x = i;
                break;
        }
    }
    
    printf("%.5lf\n", 4 * PI);
    printf("%d",x); // x = 136120次
    
    return 0;
}
