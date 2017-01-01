//指针数组，数组元素是指针，用于指向二维数组
//	类型说明符 *数组名【数组长度】

#include<stdio.h>

int main()
{
	int iArr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int *piArr[3];
	int iRow;
	piArr[0] = iArr[0];
	piArr[1] = iArr[1];
	piArr[2] = iArr[2];
	for(iRow = 0;iRow < 3;iRow++)
	{
		printf("%d,%d,%d,%d\n",*piArr[iRow],*(piArr[iRow]+1),*(piArr[iRow]+2),*(piArr[iRow]+3));
	}
	//p[i]+j找到地址，*间接访问
	return 0;
}
