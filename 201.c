// 指向一维数组的指针
// 类型说明符 （*指针变量名）【数组长度】
#include<stdio.h>

int average(float(*p)[5])
{
	int i;
	float sum = 0;
	for(i=0;i<5;i++)
	{
		sum = sum + *(*p+i);
	}
	return sum/5;
}
int main()
{
	int i,j;
	float sum;
	float courseAverage[3];
	float score[3][5];
	for ( i = 0; i < 3; ++i)
	{
		for ( j = 0; j <5 ; ++j)
		{
			scanf("%f",&score[i][j]);
		}
	}
	for ( i = 0; i < 3; ++i)
	{
		courseAverage[i] = average(score+i);
	}
	for ( i = 0; i < 3; ++i)
	{
		printf("%f\t",courseAverage[i] );
	}
	return 0;
}
