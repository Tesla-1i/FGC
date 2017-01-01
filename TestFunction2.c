/*辗转相除法求最大公约数：先求两数相除的余数，将除数作为新的被除数，
余数作为新的除数，再求新的余数，直至余数为0，此时除数是最大公约数
最小公倍数=两数相乘除以最大公约数
*/

#include <stdio.h>

//求最大公约数
int gcd(int a, int b){
	int r = a%b;
	while(r != 0){
		a = b;
		b = r;
		r = a%b;
	}
	return b;
}

//求最小公倍数
int lcm(int a, int b){
	return (a * b / gcd(a,b));
}

int main(){
	int a, b;
	printf("input a & b\n");
	scanf("%d %d",&a, &b);
	//打印最大公约数
	printf("gcd(%d,%d) = %d\n",a, b, gcd(a,b) );
	//打印最小公倍数
	printf("lcm(%d,%d) = %d\n",a, b, lcm(a,b) );
	return 0;
}