#include<stdio.h>

void println(char *piarry2)
{
    printf("%s\n",piarry2);
}

int main()
{
    char iarry1[]="C language";//���ַ��������飬ָ���Ϊchar!!!!!!!!!
    char *piarry1=iarry1;
    char *piarry2="C LANGUAGE";
    printf("%s %s\n",iarry1,piarry1);//�ַ��������������ʱ���ޡ�������ָ��ʱ����*
    println(piarry2);
    printf("\n");
    return 0;
}
