#include<stdio.h>

int main()
{

    int x = -1;
    do
    {
        x = x * x;
        printf("x = %d\n",x);
    }while(!x);     //�ֺŲ�����
    //��x��ѭ��һ�Σ�����x����Ȼ�����ڣ�x������ֻ����һ��ѭ��
    printf("x = %d\n",x);
    return 0;
}
