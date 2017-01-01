//函数处理不同长度数组：在参数中加一处理数据长度的变量!!!!!!!!!
#include<stdio.h>

void add(int iarr3[],int ilength)
{
        int i;
        for(i=0;i<ilength;i++)//不能有分号;
                iarr3[i]++;
}
int main()
{
        int iarr1[3]={2,5,3},i;
        int iarr2[5]={1,2,3,4,5};
        add(iarr1,3);//调用函数不用说类型
        for(i=0;i<3;i++)
                printf("%d\t",iarr1[i]);
        printf("\n");
        add(iarr2,5);
        for(i=0;i<5;i++)
                printf("%d\t",iarr2[i]);
        printf("\n");
        return 0;
}
