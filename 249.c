#include<stdio.h>

int main()
{
	FILE *fp;
	char ch;
	if ((fp = fopen("f:\\G\\c\\txt1.txt","r")) == NULL)//路径要准确
	{
		printf("error\n");
	}
	ch = fgetc(fp);
	while(ch != EOF)
	{
		//if(ch != ' ')
			putchar(ch);
		ch = fgetc(fp);
	}
	fclose(fp);
	return 0;
}
