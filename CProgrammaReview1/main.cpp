//注意每道题中的陷阱
/*Num1
#include <stdio.h>
int main(){
    int i, j, sum;
    for(i=3;i>=1;i--){
        sum=0;          //sum在i的循环中，每次都要归零，注意！！！！！！！！！！
        printf("sum in i=%d\n",sum);
        for(j=1;j<=i;j++){
            sum = sum + i*j;
            printf("%d\n",sum);
        }
    }
    return 0;
}
 */
/*穷举法的应用

#include <stdio.h>

int main(){
    int i,j,k,n=0;
    for(i=0;i<=100;i++)
    {
        for(j=0;j<=50;j++)
        {
            for(k=0;k<=20;k++)
            {
                if(i+k+j==50){
                    n++;
                    printf("%d %d %d\n",i,j,k);
                }
            }
        }
    }
    printf("\n%d\n",n);
    return 0;
}
 */

//杨辉三角；
//每行第一个元素及最后一个元素是1；
//中间元素是前一行同一列元素与前一行前一列元素之和

#include <stdio.h>
#define N 11

int main()
{
    int i, j, a[N][N];
    for(i=1; i<N; i++)
    {
        a[i][1] = 1;
        a[i][i] = 1;
        //为第一个及对角线元素赋值
    }
    for(i=1;i<N; i++)
    {
        for(j=2; j<i; j++)
            a[i][j] = a[i-1][j-1] + a[i-1][j];
    }
    for(i=1; i<N; i++)
    {
        for(j=1; j<=i; j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}



