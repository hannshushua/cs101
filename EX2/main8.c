#include <stdio.h>

int main(){

    int x = 9;
    int y = 9;
    int z = 1;

    if(x < 0){
        int sum = (x - 1) * 100 + 9 * 10 + z * 1;
        printf("%d", sum);
    }else{
        printf("%d", x * 100 + y * 10 + z);
    }
    return 0;
}
