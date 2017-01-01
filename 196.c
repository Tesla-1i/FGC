//一维数组与指针
#include<stdio.h>

int main()
{
    int iarry[5],i;
    int *piarry;
    piarry = iarry;
    for(i=0;i<5;i++)
    {
        *(piarry+i) = i+1;
    }
    for(i=0;i<5;i++)
    {
        printf("%d\t",piarry[i]);
    }
    printf("\n");
    return 0;
}
