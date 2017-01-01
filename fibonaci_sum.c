//编程输出fibonaci数列前n项
#include <stdio.h>

void fib(int n,int i,int i1,int i2)
{
	if (i==2)
	{
		printf("1,\t1");
	}
	if (i<n)
	{
		printf(",\t%d",i1+i2 );
		fib(n,i+1,i1+i2,i1);

	}
	else
		printf("\n");
	
}
int main(int argc, char const *argv[])
{
	int n;
	printf("input numner:\n");
	scanf("%d",&n);
	fib(n,2,1,1);
	return 0;
}