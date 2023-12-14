#include <stdio.h>

int main(){
    
    for (int i = 1 , j = 1; i <= 9 ; j++){
        int ans = i * j;
        printf("%d x %d = %d ", i, j, ans);
        if(j%9==0){
            j = 0;
            i++;
            printf("\n");
        }
        
    }
        return 0;
}
