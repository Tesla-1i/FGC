#include<stdio.h>
#include<string.h>

void replace(char str[],char str1[],char repstr[])
{
    int num1,num2,i;
    num1=strlen(str);
    for(i=0;i<num1;i++)
    {
        if(str1[0]==str[i])
            num2=i;
    }
    for(i=num1;i>num2;i--)
    {

        str[i+3]=str[i];//只需后移三位，不可多移，否则打印时出现其他的东西
        //printf("%c ",str[i+4]);
    }
    for(i=0;i<4;i++)
        str[num2+i]=repstr[i];
    printf("%s\n",str);
}
int main()
{
    char str[256]="I like programming by using C language";
    char str1[]="C";
    char repstr[]="JAVA";
    replace(str,str1,repstr);
    return 0;
}
