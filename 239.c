#include<stdio.h>
#include<stdlib.h>

struct student
{
        int inum;
        float fscore;
        struct student *pstrnext;
};
struct student * create()
{
        struct student * pstrstuhead=0,* pstrstutemp,* pstrstutail=0;//一定要注意拼写！
        int inumtemp;
        float fscoretemp;
        printf("input num and score(>=0,<0end):\n");
        scanf("%d",&inumtemp);
        scanf("%f",&fscoretemp);
        while(fscoretemp>0)
        {
                pstrstutemp=(struct student*)malloc(sizeof(struct student));
                pstrstutemp->inum=inumtemp;
                pstrstutemp->fscore=fscoretemp;
                pstrstutemp->pstrnext=0;
                if(!pstrstuhead)
                        pstrstuhead=pstrstutail=pstrstutemp;
                else
                {
                        pstrstutail->pstrnext=pstrstutemp;
                        pstrstutail=pstrstutemp;
                }
                printf("input num and score(>=0,<0end):\n");
                scanf("%d",&inumtemp);
                scanf("%f",&fscoretemp);
        }
        return pstrstuhead;
}
void list(struct student *pstrstuhead)
{
        while(pstrstuhead)
        {
                printf("%d\t%f\t\n",pstrstuhead->inum,pstrstuhead->fscore);
                pstrstuhead->pstrnext;
        }

}
struct student *search(struct student *pstrstutemp,float fscoretemp)
{
        while(pstrstutemp)
        {
                if(pstrstutemp->fscore==fscoretemp)
                        break;
                pstrstutemp=pstrstutemp->pstrnext;
        }
        return pstrstutemp;
}
int main()
{
        struct student strstutemp;
        struct student *pstrstuhead,*pstrsturesualt;
        float fscoretemp;
        int inumtemp;
        pstrstuhead=create();
        list(pstrstuhead);
        printf("input search score:\n");
        scanf("%f",&fscoretemp);
        pstrsturesualt=search(pstrstuhead,fscoretemp);
        if(pstrsturesualt)
                printf("num=%d,score=%f\n",pstrsturesualt->inum,pstrsturesualt->fscore);
        else
                printf("not found!\n");

        return 0;
}
