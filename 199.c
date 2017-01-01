//行列地址的使用形式
#include<stdio.h>
int main()
{
	int iArray[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	printf("row address:\n");
	printf("iArray+1 = %x\n", iArray+1);
	printf("&iArray[0]+1 = %x\n",&iArray[0]+1 );
	printf("&*(iArray+0)+1 = %x\n",&*(iArray+0)+1);
	printf("coloum address:\n");
	printf("*iArray+1 = %x\n",*iArray+1 );
	printf("iArray[0]+1 = %x\n",iArray[0]+1 );
	printf("*(iArray+0)+1 = %x\n",*(iArray+0)+1 );
	printf("value:\n");
	printf("*(iArray[1]+1) = %d\n",*(iArray[1]+1) );
	return 0;
}
