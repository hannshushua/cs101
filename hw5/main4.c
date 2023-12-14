#include <stdio.h>

int main(){
    
    int n = 20;
    int p1 , p2 , p3 , p4;
    p1 = p2 = p3 = p4 = 0;
    int ans = n ;
    int mid = n ;
    
    for(int i = 1 ; i <= 4 ; i++){
        if(i == 1){
            p1 = mid % 10;
        }
        if(i == 2){
            p2 = mid % 10;
        }
        if(i == 3)
        {
            p3 = mid % 10;
        }
        if(i == 4){
            p4 = mid % 10;
        }
        mid /= 10;
    }
        ans += 999 * (p1 - p4);

    if(mid>=1000)
    {
        if(n % 10 == 0){
            if(p1 == 0 && p2 == 0 && p3 == 0){
            printf("000%d",ans);
            }else if (p1 == 0 && p3 == 0){
            printf("00%d",ans);
            }else{
            printf("0%d",ans);
            }
        }else{
            printf("%d",ans);
        }
    
    }else{
        p1 = n % 10 ;
        ans += 999 * (p1 - p4);
        if(p1 == 0 && n >= 100){
            printf("0%d",ans);
        }else{
            printf("00%d",ans);
        }
    }

    return 0;
}
