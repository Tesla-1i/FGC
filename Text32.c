/*输入a，n。计算sum=a+aa+aaa+······+n项
例子：a=2, n= 4
sum = 2+ 22+ 222+ 2222
*/

#include <stdio.h>

int main(){
	int a, n, sum=0, tmp=0, count=1;
	printf("input a&b\n");
	scanf("%d %d",&a, &n);
	while(count <= n){
		tmp = tmp + a;
		sum = sum + tmp;
		a = a * 10;
		++count;
		printf("%d %d\t",tmp, sum );
	}
	printf("sum = %d\n",sum );
	return 0;
}
