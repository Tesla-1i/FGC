#include<stdio.h>
#include<string.h>

int check(char *cArryText,char *cArryWord)//�βθ���ʵ�α��������������ַָ��
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
    iSum = check(cArryText,cArryWord);//ʵ����������������ַ
    printf("���ִ���%d\n",iSum);
    return 0;
}
