/**********************/
/*位运算*/
/*逐位与：两个都为一，结果为一
逐位或：其中一个为一，就是一
逐位非或：只有其中一个为一，才为一
*/
/*******************************/
/*逐位与  测试给定数字的奇偶性*/
#include <stdio.h>
int main(){
	int test = 1, number;
	printf("input number\n");
	scanf("%d", &number);
	while(number != -1){
		if(number & test)
			printf("number is odd(奇数)\n");
		else
			printf("number is even(偶数)\n");
		printf("input a number\n");
		scanf("%d",&number);
	}
	return 0;
}

/************************/
/*逐位或  把标识符中某位设置为一*/

/*
#include <stdio.h>
#define SET 8

int main(){
	int flag;
	printf("input number\n");
	scanf("%d", &flag);
	flag = flag | SET;
	if((flag & SET) != 0)
		printf("flag is set\n");
	else
		printf("eof\n");
	return 0;
}
*/

/*逐位移位运算*/
/*左移位<<
右移位>>
常用于乘以或除以2的幂

x = y << 1;
x的十进制等于y 乘以2

x = y >> 1
x的十进制等于y 除以2

*/
