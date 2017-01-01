//数组名作为函数参数
#include<stdio.h>

void add(int iarr2[])//必须有中括号！！！！！
{
        int ii;
        for(ii=0;ii<3;ii++)
                iarr2[ii]++;//iarry2元素加一，iarry1元素也加一，因为地址相同，为同一数组！！
}
int main()
{
        int iarr1[3]={2,5,3},ij;
        for(ij=0;ij<3;ij++)
                printf("%d\t",iarr1[ij]);
        printf("\n");
        add(iarr1);//数组名做参数，传送地址，
        for(ij=0;ij<3;ij++)
                printf("%d\t",iarr1[ij]);
        printf("\n");
        return 0;
}
