//指向指针的指针
#include<stdio.h>

int main()
{
	int iArr[5] = {1,5,7,9};
	int *piArr[5] = {&iArr[0],&iArr[1],&iArr[2],&iArr[3],0};
	int **ppiArr,i;
	ppiArr = piArr;
	for(i=0;i<4;i++)
	{
		printf("%d\t",**ppiArr);
		ppiArr++;
	}
	printf("\n");
	iArr[4] = 3;
	piArr[1] = &iArr[4];
	piArr[2] = &iArr[1];
	piArr[3] = &iArr[2];
	piArr[4] = &iArr[3];
	ppiArr = piArr;//指针回到开头！！！！！！！！！！！！！
	for(i=0;i<5;i++)
	{
		printf("%d\t",**ppiArr );
		ppiArr++;
	}
	printf("\n");
	return 0;
}
