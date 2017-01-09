/*理解指向指针的指针的作用*/

#include<stdio.h>

void swap4(char * *p, char * *q)//理解！取得是p1,p2的地址
	{	char* t;
		t=*p;*p=*q;*q=t;    //对地址进行间接访问，修改地址上的内容
	}

int main()
{
   char c1 = 'A', c2='B';
   char str1[10]="AAA", str2[10]="BBB";
   char *p1 = str1, *p2 = str2;


   swap4(&p1, &p2);//???????????????????????????????????
   //取得是p1,p2的地址，swap()函数就是对p1,p2中的内容进行更改
   printf("%s, %s\n", p1, p2);
   printf("%s, %s\n",str1,str2);    //str1,str2的内容没变
   return 0;
}
