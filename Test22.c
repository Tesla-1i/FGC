//递归求a的b次方

#include <stdio.h>

int power(int a,int b)
{
	if(b==1)
		return a;
	else
		return power(a,b-1)*a;  //不要忘记后边的*a
}

int main()
{
  printf("%d",power(3,4));
  return 0;
}
