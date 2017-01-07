#include <stdio.h>

int main(){
	int n = 0;
	while(n++ <= 1)
		printf("%d\n",n );
//n++ 《= 1.首先判断n《1，然后n自加。到打印时。n已经加一了
	return 0;
}
