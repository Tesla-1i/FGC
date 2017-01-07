/*函数的递归调用*/

#include <stdio.h>

int fun(int a, int b){
	if(b == 0)
		return a;
	else
		return(fun(--a, --b));
}

int main(){
	printf("fun(4,2) = %d\n",fun(4,2) );
	return 0;
}
