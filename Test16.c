//八进制字符串转换为十进制整数

#include <stdio.h>
#include <string.h>
int main(){
	int i, j, l, sum, s[20];
	char n[10],  *p;
	printf("Input a string(请输入数字)\n");
	scanf("%s",n);
	p = n;
	l = strlen(n);
	printf("w%d\n",*p );
	for(i=l-1; i>=0; i--){
		s[i] = *p;
		p++;
		s[i] = 1;
		for(j = 0; j <= i; j++)
		{	s[i] = s[i] * 8;
			printf("s[%d] = %d\n",i, s[i] );
		}
	}
	sum = 0;
	for(i = 0; i < l; i++)
		sum = sum + s[i];
	printf("总和sum = %d\n",sum );
	return 0;
}
