/*���ָ��ָ���ָ�������*/

#include<stdio.h>

void swap4(char * *p, char * *q)//��⣡ȡ����p1,p2�ĵ�ַ
	{	char* t;
		t=*p;*p=*q;*q=t;    //�Ե�ַ���м�ӷ��ʣ��޸ĵ�ַ�ϵ�����
	}

int main()
{
   char c1 = 'A', c2='B';
   char str1[10]="AAA", str2[10]="BBB";
   char *p1 = str1, *p2 = str2;


   swap4(&p1, &p2);//???????????????????????????????????
   //ȡ����p1,p2�ĵ�ַ��swap()�������Ƕ�p1,p2�е����ݽ��и���
   printf("%s, %s\n", p1, p2);
   printf("%s, %s\n",str1,str2);    //str1,str2������û��
   return 0;
}
