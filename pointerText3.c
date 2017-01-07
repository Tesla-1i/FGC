#include <stdio.h>

void f(int *q){
	int i = 0;
	for(;i<5;i++)
		(*q)++;
	//将间接访问到的值自加五次，不是每个元素加一次；
}

int main(){
    int i;
	int a[5] = {1,2,3,4,5};
	f(a);
	for(i = 0; i < 5; i++)
		printf("%d\n",a[i] );
	return 0;
}
