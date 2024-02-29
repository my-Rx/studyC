#include <stdio.h>

int main(){
    int x, y, res;
    scanf("%d %d", &x, &y);
    printf("%d",x!=0&&y!=0?y>0?x>0?1:2:x<0?3:4:0); //조건 연산자

    if (x != 0 && y != 0){
        if (y > 0){
            if (x > 0){
                res = 1;
            } else {
                res = 2;
            }
        } else {
            if (x < 0){
                res = 3;
            } else {
                res = 4;
            }
            
        }
        
    }
    printf("%d", res);
return 0;
}