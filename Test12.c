#include<stdio.h>
void swap1(char a, char b)
{	char t;
		t=a; a=b; b=t;
}
	void swap2(char *p, char *q)
	{	char *t = 0;
		t=p; p=q; q=t;
	}
	void swap3(char* p, char *q)
	{	char t;
		t=*p;*p=*q;*q=t;
	}
void swap4(char * *p, char * *q)//¿ÌΩ‚£°
	{	char* t;
		t=*p;*p=*q;*q=t;
	}

int main()
{
   char c1 = 'A', c2='B';
   char str1[10]="AAA", str2[10]="BBB";
   char *p1 = str1, *p2 = str2;

   swap1(c1, c2);
   printf("c1=%c,c2 = %c\n", c1, c2);
   swap3(&c1, &c2);
   printf("c1=%c,c2 = %c\n", c1, c2);

   swap2(p1, p2);
   printf("%s, %s\n", p1, p2);
   swap3(p1, p2);
   printf("%s, %s\n", p1, p2);
   swap4(&p1, &p2);//???????????????????????????????????
   printf("%s, %s\n", p1, p2);
   printf("%s, %s\n",str1,str2);
   return 0;
}
