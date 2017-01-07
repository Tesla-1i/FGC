/*指针作为函数参数，注意函数的功能是改变指针的指向，
还是改变指针指向的变量的值，还是仅仅是改变形参，实参未改变
*/

#include <stdio.h>

void swap(int *a, int *b){
	int *t;
	t = a;
	a = b;
	b = t;
	//注意a，b指针的指向发生了交换，但实参的指向未改变，！！！！！！！
}

int main(){
	int i=3, j=5, *p=&i, *q=&j;
	swap(p,q);
	printf("%d %d\n",*p, *q );
	return 0;
}