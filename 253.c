#include<stdio.h>
struct student
{
	int iNum;
	char *cArrName;
	char cSex;
	float fScore;
}strStuArr[5] = {
	{101,"LiPing",'M',100},
	{102,"WangMing",'M',99},
	{103,"ZhangPing",'F',98},
	{104,"ChengLing",'F',97},
	{105,"HeFang",'F',96},
};      //分号不能忘记

int main(){
	FILE *fp;
	if((fp = fopen("f:\\G\\c\\txt1.txt","a")) == NULL)
		printf("Error\n");
	fwrite(strStuArr,sizeof(struct student),5,fp);
	fclose(fp);
	return 0;
}
