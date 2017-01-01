#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char str[256];
	FILE *fp1, *fp2;
	int ch, i;
	if(argc != 2)
	{
		printf("error\n");
		return 1;
	}
	gets(str);
	fp1 = fopen(argv[1],"a");
	i = 0;
	while(str[i] != '\0')
	{
		ch = (int)(str[i]);
		fputc(ch,fp1);
		i++;
	}
	fclose(fp1);
	fp2 = fopen(argv[1], "r");
	while(1)
	{
		ch = fgetc(fp2);
		if(ch == EOF)
			break;
		putchar((char)ch);
	}
	putchar('\n');
	return 0;
	return 0;
}
