#include<stdio.h>

void isperfectnum(int m)//������������
{
        int i,sum=1;
        for(i=2;i<m;i++)
        {
                if(m%i==0)// == ע�⣡������������
                        sum =sum+i;
        }
        if(sum==m)
                printf("%d ",m);
}
int main()
{
        int n,num;
        printf("input one number:\n");
        scanf("%d",&num);
        isperfectnum(num);
        for(n=2;n<=1000;n++)
                isperfectnum(n);
        return 0;
}
