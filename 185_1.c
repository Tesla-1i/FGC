#include<stdio.h>

int square(int i)//数据类型！！！！！！！
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
        for(i=1;i<=10;i++)//i要初始化，i=,是错误；
        {
                square_num=square(i);
                printf("%d\t",square_num);
        }
        printf("\n");
        return 0;
}
