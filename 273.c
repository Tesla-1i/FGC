//汉诺塔问题
#include<stdio.h>
int main()
{
	int n;
	void hanoi(int n,char x,char y,char z);
	printf("input number:\n");
	scanf("%d",&n);
	printf("the step to moving %2d diskes:\n",n);
	hanoi(n,'A','B','C');
	return 0;
}
void hanoi(int n,char x,char y,char z)
{
	if(n==1)
	{
		printf("%c-->%c\n",x,z );
	}
	else
	{
		hanoi(n-1,x,z,y);
		printf("%c-->%c\n",x,z );

		hanoi(n-1,y,x,z);
	}
}
