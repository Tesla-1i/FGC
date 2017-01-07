/*指针作为函数的参数[注意赋值号=与逻辑等==的不同]*/

#include <stdio.h>

void fun(char *s, char *t){
	while(*s == '*')
	//找到字符串s中第一个非*的元素
		s++;
	while(*t = *s){
	//将s第一个非*的元素及以后的付给t
		t++;
		s++;
	}
}

int main(){
	char *s = "****a*b****", t[80];
	fun(s, t);
	puts(t);
	return 0;
}