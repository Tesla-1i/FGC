#include<stdio.h>

int num(int n)
{
    int num1;
    if(n>1)
    {
        num1=n*num(n-1);
    }
    else
        num1=1;
    return num1;
}
int main()
{
    int num(int n);
    int n,m,a,sum,b,c;
    printf("输入组合数(n,m)  n>m>0:\n");
    scanf("%d %d",&n,&m);//&&&&&&&&&&&&&&&&&&&&&&&&&&

    a=num(n);
    b=num(m);
    c=num(n-m);
    sum=a/(b*c);
    printf("n!/(m!*(n-m)!) = %d\n",sum);
    //printf("%d\n",a);
    return 0;
}
