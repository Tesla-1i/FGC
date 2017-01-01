/*考察各种变量的生存期和作用域*/

#include <stdio.h>

int a = 4;		//全局变量

int f(int n)
{
	int t = 0;
	static int a = 5;	//静态局部变量
	if(n%2){
		int a = 6;		//程序块中的局部变量，对外部的同名变量有屏蔽作用
		t += a++;
	}
	else{
		int a = 7;
		t += a++;
	}
	return t + a++;
}

int main()
{
	int s = a, i = 0;
	for(;i < 2; i++)
		s += f(i);
	printf("s = %d\n",s );
	return 0;
}
