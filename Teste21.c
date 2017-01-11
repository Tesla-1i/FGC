//递归求数组的和

#include <stdio.h>

int sum_array(int a[],int n)
{
	if(n==1)
		return a[0];
	else
		return sum_array(a,n-1)+a[n-1]; //前面返回一个元素，
		//所以sum=sum（）+另一个元素
}

int main()
{
	int a[5]={1,2,3,4,5};
	printf("%d",sum_array(a,5));
	return 0;
}
