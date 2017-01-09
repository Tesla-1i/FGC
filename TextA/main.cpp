#include <stdio.h>

int main(){
    int k = 3, sum = 0;
    switch(k--){
        default:break;
        case 1:sum += k;
        case 2:
        case 3:sum += k;
            break;
    }
    /*switch(k--)首先k不变，找到case 3，然后k--，
     * case3执行语句，sum=0+2，而不是0+3*/
    printf("总值sum = %d\n",sum);
    return 0;
}