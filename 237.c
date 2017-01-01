#include<stdio.h>
struct student
{
        int inum;
        char *pcname;
        char csex;
        float fscore;
}strstu1={102,"zhangping",'m',78.5},*pstrstudent;
int main()
{
        struct student *pstrstudent;
        pstrstudent = &strstu1;

        printf("sex=%c\nscore=%f\n",(*pstrstudent).csex,(*pstrstudent).fscore);
        printf("number=%d\name=%s\n",pstrstudent->inum,pstrstudent->pcname);
        return 0;
}
