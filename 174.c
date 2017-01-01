#include<stdio.h>

int fib(int j)
{
        int k;
        if(j==1||j==2)
                k=1;
        else
                k=fib(j-1)+fib(j-2);
        return k;
}
int main()
{
        int iarry[10],i;
        for(i=0;i<10;i++)
        {
                iarry[i]=fib(i+1);
        }
        for(i=0;i<10;i++)
        {
                printf("%d\t",iarry[i]);
        }
        printf("\n");
        return 0;
}
