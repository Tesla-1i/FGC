//找1到100的随机数
#include<stdio.h>
#include<time.h>

int getrand()
{
        int irand;
        srand(time(0));
        irand = rand()%100+1;
        return irand;
}
int main()
{
        int iresult;
        iresult = getrand()%7;
        printf("随机数%d",iresult);
        return 0;
}
