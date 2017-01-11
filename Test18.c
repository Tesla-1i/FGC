/*输入字符串，计算有几个单词*/


#include <stdio.h>
int main()
{
    char string[80];
    int i,num=0,word=0; //word 用于流程控制，num用于计数
    char c;
    gets(string);
    for (i=0;(c=string[i])!='\0';i++)
    {
        if(c==' ')
            word=0;
        else if(word==0)    //遇到空格，word=0；num++，word变为非零
        {
            word=1; num++;
        }
    }
    printf("There are %d words in the line.\n",num);
    return 0;
}
