#include<stdio.h>
#include<stdlib.h>
struct Student
{  long num;
   float score;
   struct Student *next;
 };

void creatList()
{
	  struct Student *pHead = 0;   //ͷָ��
	  struct Student *pNew;        //�½ڵ�ָ��
	  struct Student *pCur ;
	  printf("����\n");    //��ǰβ�ڵ�ָ��
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
	  free(pNew);    //����ͷָ��
}

int main(){

	printf("��������:\n");
	creatList();
	return 0;
}
