//十进制数转换成二进制数输出
#include <stdio.h>

void d2b(unsigned int n)
{
	if (n==0 || n==1)
	{
		putchar('\n');
	}
	else

	{
		d2b(n/2);//除以二
		printf("%d\n",n%2 );//除以二取余
	}
}
int main()
{
	int n;
	printf("input number:\n");
	scanf("%d",&n);
	d2b(n);
	return 0;
}