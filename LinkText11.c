#include<stdio.h>
#include<stdlib.h>
struct Student
{  long num;
   float score;
   struct Student *next;
 };

void creatList()
{
	  struct Student *pHead = 0;   //头指针
	  struct Student *pNew;        //新节点指针
	  struct Student *pCur ;
	  printf("输入\n");    //当前尾节点指针
	  while(1)
	  {
	  	pNew = ( struct Student*) malloc(sizeof(struct Student));

	  	scanf("%ld,%f",&pNew->num,&pNew->score);
	  	if(pNew->num == 0) break;

		if(pHead== 0)
		     pHead = pNew ;
		else{
		    pCur->next = pNew;
       pCur = pCur->next ;
   		}
}
		pCur = 0;
	  //return pHead;
	  free(pNew);    //返回头指针
}

int main(){

	printf("创建链表:\n");
	creatList();
	return 0;
}
