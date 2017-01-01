//指向函数的指针
#include<stdio.h>

int max(int i1,int i2)
{
	return (i2>i1?i2:i1);
}

int main()
{
	int(* pf)(int ,int);//定义指向函数的指针,,,,,,逗号不要忘记
	int i1,i2,i3;
	pf = max;//函数名付给指针
	printf("input two number:\n");
	scanf("%d %d",&i1,&i2);
	i3 = (*pf)(i1,i2);
	printf("Maxnum = %d\n",i3 );
	return 0;
}
