//�ݹ�������ĺ�

#include <stdio.h>

int sum_array(int a[],int n)
{
	if(n==1)
		return a[0];
	else
		return sum_array(a,n-1)+a[n-1]; //ǰ�淵��һ��Ԫ�أ�
		//����sum=sum����+��һ��Ԫ��
}

int main()
{
	int a[5]={1,2,3,4,5};
	printf("%d",sum_array(a,5));
	return 0;
}
