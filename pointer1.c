#include<stdio.h>

int select(int*pSrc,int n,int*pTar)
{
    int i,sum=0,num=0;
    for(i=0;i<n;i++)
    {
        if(pSrc[i]%3 == 0)
        {
          pTar[num++]=pSrc[i];
            sum++;
        }
    }
    //printf("%d\n",sum);
    return sum;
}

int main()
{
    int a[10] = {5,15,25,36,47,58,69,78,56,90},n = 10,b[10],m;
    int *pSrc=a,*pTar=b;
    m = select(pSrc,n,pTar);//���ú�����ʵ��Ϊָ��ʱ��ǧ��Ҫ��*****,��������������ָ����
    printf("%d\n",m);//m=select(*pSrc,n,*pTar)�Ǵ���ģ���������������������������
    return 0;
}
