#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *str = NULL;
	int i = 0, j = 0, num = 0, spaceNum = 0;
	int *pPos = NULL;
	printf("input string\n");
	gets(str);
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			spaceNum++;		//记录空格数
		num++;				//记录总数
		i++;				//计数器
	}
	if (spaceNum == 0)
	{
		printf("%s\n", str);
		return 0;
	}
	pPos = (int*)malloc(sizeof(int)* spaceNum);
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			pPos[j] = i;	//pPos[]记录空格在原字符串中的号
			j++;
		}
		i++;
	}
	
	for (i = pPos[spaceNum - 1] + 1; i <= num - 1; i++)
		printf("%c", str[i]);
	printf("\n");
	
	for (j = spaceNum - 2; j >= 0; j--)
	{
		for (i = pPos[j] + 1; i <= pPos[j + 1] - 1; i++)
			printf("%c", str[i]);
		printf("\n");
	}
	
	for (i = 0; i <= pPos[0] - 1; i++)
		printf("%c", str[i]);
	printf("\n");
	free(pPos);				
	return 0;
}
