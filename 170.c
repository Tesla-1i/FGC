//��������Ϊ��������
#include<stdio.h>

void add(int iarr2[])//�����������ţ���������
{
        int ii;
        for(ii=0;ii<3;ii++)
                iarr2[ii]++;//iarry2Ԫ�ؼ�һ��iarry1Ԫ��Ҳ��һ����Ϊ��ַ��ͬ��Ϊͬһ���飡��
}
int main()
{
        int iarr1[3]={2,5,3},ij;
        for(ij=0;ij<3;ij++)
                printf("%d\t",iarr1[ij]);
        printf("\n");
        add(iarr1);//�����������������͵�ַ��
        for(ij=0;ij<3;ij++)
                printf("%d\t",iarr1[ij]);
        printf("\n");
        return 0;
}
