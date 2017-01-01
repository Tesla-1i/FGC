#include<stdio.h>

void println(char *piarry2)
{
    printf("%s\n",piarry2);
}

int main()
{
    char iarry1[]="C language";//存字符串的数组，指针均为char!!!!!!!!!
    char *piarry1=iarry1;
    char *piarry2="C LANGUAGE";
    printf("%s %s\n",iarry1,piarry1);//字符串输出用数组名时，无【】，用指针时，无*
    println(piarry2);
    printf("\n");
    return 0;
}
