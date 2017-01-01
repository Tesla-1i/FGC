//动态分配内存
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n;
	float *pScore = 0,average = 0.0f;
	printf("input n:\n");
	scanf("%d",&n);
	if((pScore = (float*)malloc(n * sizeof(float))) == 0)
		exit(0);
    printf("input score please(number < n)\n");
	for(i = 0;i < n;i++)
	{
		scanf("%f",pScore + i);
		average = average + *(pScore + i);
	}
	average = average / n;
	printf("Average = %f\n",average );
	if(pScore)
		free(pScore);
	return 0;
}
