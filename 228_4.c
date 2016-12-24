#include <stdio.h>
#include <stdlib.h>

void sort(float *pScore, int *pInd, int n)
{
	float fTem;
	int iTem, i, j;
	//冒泡排序
	for(i = 0; i < n-1; i++)
	{
		for(j = 0; j < n-i-1; j++)
		{
			if(pScore[j] < pScore[j+1])
			{
				fTem = pScore[j];
				pScore[j] = pScore[j+1];
				pScore[j+1] = fTem;
				iTem = pInd[j];
				pInd[j] = pInd[j+1];
				pInd[j+1] = iTem;
			}
		}
	}
}

int main()
{
	int num, i;
	float *pCourse1, *pCourse2, *pCourse3, *pAverage;
	int *pInd;
	printf("input number of students\n");
	scanf("%d", &num);
	pCourse1 = (float *)malloc(sizeof(float) * num);
	pCourse2 = (float *)malloc(sizeof(float) * num);
	pCourse3 = (float *)malloc(sizeof(float) * num);
	pAverage = (float *)malloc(sizeof(float) * num);
	pInd = (int *)malloc(sizeof(int) * num);
	//printf("input the first number`s score\n");
	for(i = 0; i < num; i++);
	{
		scanf("%f %f %f",pCourse1+i,pCourse2+i,pCourse3+i);		//pCourse1+i 指的是 取地址
		pAverage[i] = (pCourse1[i] + pCourse2[i] +pCourse3[i])/3.0f;
		pInd[i] = i;
		//printf("input the next number `s score\n");
	}
	sort(pAverage, pInd, num);
	for(i = 0; i < num; i++)
		printf("%d %f\n",pInd[i], pAverage[i] );
	free(pCourse1);free(pCourse2);free(pCourse3);
	free(pAverage);free(pInd);
	return 0;
}
