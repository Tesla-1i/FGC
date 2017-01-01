#include <stdio.h>//打印1到n的阶乘
#define size 10

int fact(int n)//打印n的阶乘，
{
	if (n>0)//函数递归
	{
		return n*fact(n-1);
	}
	else
		return 1;
}
int calnumber(int nums[],int n)
{
	int i;
	if (n>0 && n<size+1)
	{
		for ( i = 0; i < n; ++i)
		{
			nums[i]=fact(i+1);//调用fact 函数，将阶乘存在数组中
		}
		return 1;
	}
	else
		return 0;
}
int main(int argc, char const *argv[])
{
	int nums[size];
	int i,n;
	scanf("%d",&n);
	if(!calnumber(nums,n))
	{
		printf("illegal number!\n");
		return 1;
	}
	else
	{
		for ( i = 0; i < n; ++i)
		{
			printf("%d\n",nums[i] );
		}
	}
	return 0;
}
