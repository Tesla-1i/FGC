//�ݹ���a��b�η�

#include <stdio.h>

int power(int a,int b)
{
	if(b==1)
		return a;
	else
		return power(a,b-1)*a;  //��Ҫ���Ǻ�ߵ�*a
}

int main()
{
  printf("%d",power(3,4));
  return 0;
}
