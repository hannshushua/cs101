#include <stdio.h>

int main(){
    
    for (int i = 1 , j = 1 ; i <= 9 ; j++){
        int ans = i * j;
        printf("%d x %d = %2d|", i, j, ans);
        if(j == 9){
            j = 0;
            i++;
            printf("\n");
        }
        
    }
        return 0;
}
