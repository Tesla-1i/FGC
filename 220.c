#include<stdio.h>

int main()
{
    char cArry[15];
    printf("input string:\n");
    gets(cArry);//gets 不以空格作结束标志，scanf以空格作结束标志之一
    printf("output string:\n");
    puts(cArry);
    return 0;
}
