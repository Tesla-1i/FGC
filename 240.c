//链表练习
#include<stdio.h>
//声明结构体类型
struct student
{
	int iNum;
	float fScore;
	struct student *pStrNext;//指向结构体的指针
};//分号不可省

//创建链表
struct student *create()//返回值是结构体指针，见l21
{
	struct student *pStrStuHead = 0,*pStrStuTemp,*pStrStuTail = 0;//头指针，临时指针，尾指针
	int iNumTemp;
	float fScoreTemp;
	printf("input number and score(>=0,<0 end)\n");
	scanf("%d",&iNumTemp);
	scanf("%f",&fScoreTemp);
	//添加结点，输入成绩为负数，结束
	while(fScoreTemp>0)
	{
		//申请结点，填入数据，结点的指针域=0，因为新节点将是最后一个
		pStrStuTemp = (struct student *)malloc(sizeof(struct student));
		pStrStuTemp->iNum = iNumTemp;
		pStrStuTemp->fScore = fScoreTemp;
		pStrStuTemp->pStrNext = 0;
		//接入链表
		if(!pStrStuHead)
			//接入第一个指针，头指针，尾指针，都指向该节点
			pStrStuHead = pStrStuTail = pStrStuTemp;
		else
		{
			//接入非第一个结点?????????????
			pStrStuTail->pStrNext = pStrStuTemp;//接在尾指针所指结点之后，
			//让前一个的pStrNext 能找到下一个结点首位置
			pStrStuTail = pStrStuTemp;//尾指针指向新加入的结点，，
			//保证pStrStuTump创建下下一个结点时，pStrStuTail能掌控下个结点

		}
		printf("input number and score(>=0,<0 end):\n");
		scanf("%d",&iNumTemp);
		scanf("%f",&fScoreTemp);
	}
	return pStrStuHead;
}

//输出链表
void list(struct student *pStrStuHead)
{
	while(pStrStuHead)
	{
		printf("%d\t%f\t\n",pStrStuHead->iNum,pStrStuHead->fScore);//输出学号，成绩
		pStrStuHead = pStrStuHead->pStrNext;//移向下一个结点
		//将pStrNext的指向 赋值 给 pStrStuHead
	}
}

//查找结点
struct student *search(struct student *pStrStuTemp,float fScoreTemp)
{
	while(pStrStuTemp)//pStrStuTemp最后指向NULL
	{
		if(pStrStuTemp->fScore == fScoreTemp)
			break;//跳出循环
		pStrStuTemp = pStrStuTemp->pStrNext;//移动到下一个结点，下一个结点的地址给pStrStuTemp
	}
	return pStrStuTemp;
}

int main()
{
	struct student strStuTemp;
	struct student *pStrStuHead,*pStrStuResult;
	float fScoreTemp;
	int iNumTemp;
	//创建链表
	pStrStuHead = create();
	//输出链表结点
	list(pStrStuHead);
	//输出查找的成绩，并返回结点位置
	printf("input seafrch score:\n");
	scanf("%f",&fScoreTemp);
	pStrStuResult = search(pStrStuHead,fScoreTemp);
	if (pStrStuResult)
	{
		printf("num=%d,score=%f\n",pStrStuResult->iNum,pStrStuResult->fScore);
	}
	else
		printf("not found!\n");
	return 0;
}
