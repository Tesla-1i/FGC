//��1��100�������
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
        printf("�����%d",iresult);
        return 0;
}
