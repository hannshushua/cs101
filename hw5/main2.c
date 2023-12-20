#include <stdio.h>

int main(){
    double PI = 0.0;
    int x = 0;
    double sum;

    for (int i = 0; ; i++){

        sum = 1.0 / (2 * i + 1);

        if(i % 2){
            PI -= sum;
        }else{
            PI += sum;
        }
        
        if((long)(PI * 4 * 100000) == 314159){
                x = i;
                break;
        }
    }

    printf("%.5f\n", 4 * PI);
    printf("%d",x + 1); // x = 136121次

    return 0;
}
