#include <stdio.h>

int main(){
    
    int n = 12345;
    int p1 , p4;
    p1 = p4 = 0;
    int ans = n ;
    
    for(int i = 1 ; i <= 4 ; i++){
        if(i == 1){
            p1 = n % 10;
        }
        if(i == 4){
            p4 = n % 10;
        }
        n /= 10;
    }
        ans += 999 * (p1 - p4);
        printf("%d",ans);

    return 0;
}
