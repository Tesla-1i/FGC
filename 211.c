#include<stdio.h>
int select(int *pSrc,int n,int *pTar)
{
    int i,iNum=0;
    for(i=0;i<n;i++)
    {
        if(pSrc[i]%3==0)
        {
            pTar[iNum] = pSrc[i];
            iNum++;
        }
    }
    return iNum;
}
int main()
{
    int iSrc[10]={5,15,25,36,47,58,69,78,56,90};
    int iTar[10],i,iNum=0,n=10;
    int *pSrc=iSrc,*pTar=iTar;
    iNum = select(pSrc,n,pTar);//实参为指针，不要有间接访问符******
    for(i=0;i<iNum;i++)
        printf("%d\t",pTar[i]);
    printf("\n");
    return 0;
}
