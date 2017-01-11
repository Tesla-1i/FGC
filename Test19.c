#include<stdio.h>

int main()
{

    int x = -1;
    do
    {
        x = x * x;
        printf("x = %d\n",x);
    }while(!x);     //分号不能忘
    //！x，循环一次，传入x，自然不等于！x，所以只进行一次循环
    printf("x = %d\n",x);
    return 0;
}
