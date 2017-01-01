#include<stdio.h>

void prime(int num)
{
        int i,j;
        for(i=2;i<=num;i++)
        {
                if(num%i==0)
                        break;
        }
        if(i==num)
                printf("%d is a prime.\n",num);
        else
                printf("%d is not a prime.\n",num);
        for(j=2;j<=200;j++)
        {       for(i=2;i<=j;i++)
                {
                        if(j%i==0)//µÈÓÚÊÇ == !!!!!!!!
                                break;
                }
                if(j==i)
                        printf("%d ",j);
        }

}
int main()
{
        int num;
        printf("input one number:\n");
        scanf("%d",&num);
        prime(num);
        return 0;
}
