#include<stdio.h>
/*
int main()
{
    int i = 1, sum =0, n = 3;
    for(; i <= n; i++)
    {
        sum =sum +i;
    }
    printf("sum = %d\n",sum);
    return 0;
}

int main()
{
    int i = 1, n = 3, sum=0;
    for(i =1; i<=n; sum+=i++)
    ;
    printf("sum = %d\n",sum);
    return 0;

}


int main()
{
    int i, sum = 0, n=3;
    for(i=1; ;i++)
    {

        sum = sum + i;
        if(i >= n)

            break;
    }
    printf("sum = %d\n",sum);
    return 0;
}

int main()
{
    int i = 1, n=3, sum=0;
    for(; i <= n;)
    {

        sum = sum + i++;
    }
    printf("sum = %d\n",sum);
    return 0;
}
*/

int main()
{
    int i = 1, sum = 0, n = 3;
    for(i = 1; sum += i++,i<= n;)
    ;
    printf("sum = %d\n",sum);
    return 0;
}
