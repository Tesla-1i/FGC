#include<stdio.h>
#include<string.h>

int check(char *cArryText,char *cArryWord)//形参根据实参必须是数组名或地址指针
{
    char *pc=cArryText;
    int iWordLength,iSum=0;
    iWordLength = strlen(cArryWord);
    while(pc!=NULL)
    {
        pc = strstr(pc,cArryWord);
        if(pc!=NULL)
        {
            iSum++;
            pc = pc + iWordLength;
        }
    }
    return iSum;
}
int main()
{
    char cArryText[80],cArryWord[10];
    int iSum;
    gets(cArryText);
    gets(cArryWord);
    iSum = check(cArryText,cArryWord);//实参是数组名，即地址
    printf("出现次数%d\n",iSum);
    return 0;
}
