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
    /*switch(k--)����k���䣬�ҵ�case 3��Ȼ��k--��
     * case3ִ����䣬sum=0+2��������0+3*/
    printf("��ֵsum = %d\n",sum);
    return 0;
}