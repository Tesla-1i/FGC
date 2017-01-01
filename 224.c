//main函数带参数

#include<stdio.h>
int main(int argc, char *argv[])
{
	int i1,i2;
	if(argc < 3)
	{
		printf("parameter number error\n");
		return 0;
	}
	i1 = atoi(argv[1]);
	i2 = atoi(argv[2]);
	printf("%d + %d = %d\n",i1,i2,i1+i2 );
	return 0;
}