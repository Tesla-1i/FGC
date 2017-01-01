#include<stdio.h>

int leap(int year)
{
        if(year%4==0&&year%100!=0 || year%400==0)
                return 1;
        else
                return 0;
}
int main()
{
        int d[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        int year,month,day,i,sum=0;
        printf("input year month day :\n");
        scanf("%d %d %d",&year,&month,&day);
        if(leap(year)==0)//判断日期的有效性
        {
                if(month==2)
                {
                        if(day==29)
                        {
                                printf("error!");goto A;}
                }

        }
        for(i=1;i<month;i++)
                sum =sum+d[i];
        sum=sum+day+(month>2?leap(year):0);
        printf("%d\n",sum);
        A:;//分号 啥也不做
        return 0;
}
