#include<stdio.h>

int square(int i)//�������ͣ�������������
{
        int j;
        j=i*i;
        return j;
}
int main()
{
        int i,num,square_num;
        printf("input one number:\n");
        scanf("%d",&num);
        printf("square_num:%d\n",square(num));
        for(i=1;i<=10;i++)//iҪ��ʼ����i=,�Ǵ���
        {
                square_num=square(i);
                printf("%d\t",square_num);
        }
        printf("\n");
        return 0;
}
