//删除字符串中所有字串
#include<stdio.h>
#include<string.h>
int delStr(char *pstr1,char *pstr2)
{
	int num=0,i,j;
	int size1 = strlen(pstr1);
	int size2 = strlen(pstr2);
	for(j = size1 - size2;j >= 0;j--)
	{
		for(i = 0;i < size2;i++)
		{
			if(pstr1[j+i] != pstr2[i])
				break;
		}
		if(i == size2)
		{
			i = j;
			while((pstr1[i] = pstr1[i+size2]) != '\0')
				i++;
			num++;
		}
	}
	return num;
}
int main()
{
	char str1[256],str2[256];
	char *pstr1,*pstr2;
	int found;
	pstr1 = str1;
	pstr2 = str2;
	printf("input string1:\n");
	gets(str1);
	printf("input string2:\n");
	gets(str2);
	found = delStr(pstr1,pstr2);
	puts(str1);
	printf("the number of string2 in string1 is %d\n",found );
	return 0;
}
