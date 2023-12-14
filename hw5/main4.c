#include <stdio.h>

int main(){
    
    int n = 12345;
    int t1 = 0;
    int p1 = 0;
    int p2 = 0;
    int ans = n ;

    if(n>=1000)
    {
        for(int i = 1 ; i <= 5 ; i++){
        t1 = n % 10;
        if(i == 1){
            p1 = t1 % 10;
        }
        if(i == 4){
            p2 = t1 % 10;
        }
        n /= 10;
    }
        ans += 999 * (p1 - p2); // +999p1-999p2
        if(ans == 1){
            printf("000%d",ans);
        }else{
            printf("%d",ans);
        }

    }else{
        p1 = n % 10 ;
        ans += 999 * (p1 - p2);
        printf("%d",ans);
    }
    return 0;
}
