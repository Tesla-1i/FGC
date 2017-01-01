#include <stdio.h>//用递归方法，求数组元素的加和

int sum(int nums[],int n)
{
	int sum2;
	if(n>1)
		sum2 = nums[n-1]+sum(nums,n-1);//n-1号值加到sum2,
	else
		sum2 = nums[0];
	return sum2;
}
int main()
{
	int nums[3]={1,2,3};
	int sum1;
	sum1 = sum(nums,3);//3指的是个数，不是标号！！！！！！！！
	printf("%d\n",sum1 );
	return 0;
}