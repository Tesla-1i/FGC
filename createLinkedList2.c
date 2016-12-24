#include <stdio.h>
#include <stdlib.h>
#define NUL 0

struct linked_list
{
	int number;
	struct linked_list *next;
};					//;;;;;;;;
typedef struct linked_list node;

/*************************/

//插入结点

node *find(node *list,int key)
{
	if(list->next->number == key)	//找到关键结点
		return(list);
	else if(list->next->next == NUL)	//结束
		return(NUL);
	else
		find(list->next,key);		//递归
}

node *insert(node *head)
{
	node *find(node *p,int a);	//不要忘记；；；；；；；
	node *new;					//指向新节点的指针
	node *n1;					//指向关键结点的前一个结点
	int key;					//关键数
	int x;						//要插入的数据项
	printf("Value of new item?\n");
	scanf("%d",&x);
	printf("Value of key item?");
	scanf("%d",&key);
	if(head->number == key)		//新节点是第一个数据项
	{
		new = (node*)malloc(sizeof(node));
		new->number = x;
		new->next = head;
		head = new;
	}
	else{
		n1 = find(head,key);		//调用find函数
		if(n1 == NUL)
			printf("\n key is not found\n");
		else{
			new = (node*)malloc(sizeof(node));
			new->number = x;
			new->next = n1->next;
			n1->next = new;
		}
	}
	return (head);
}

/******************************/

//创建链表

void create(node *list)
{
	printf("Input a number(type -999 end)\n");
	scanf("%d",&list->number);			//&&&&&&&&&
	if(list->number == -999)
	{
		list->next = NUL;
	}
	else{
		list->next = (node *)malloc(sizeof(node));
		create(list->next);					//递归调用
	}
}

void print(node *list)
{
    node *insert(node *head);

	if(list->next != NULL)
	{
		printf("%d-->",list->number );
		if(list->next->next == NULL)
			printf("%d",list->next->number );
		print(list->next);		//递归调用

	}
}

int count(node *list)
{
	if(list->next == NUL)
		return(0);
	else
		return(1 + count(list->next));		//递归调用
}

/*********************************/

int main()
{


    node *insert(node *head);
	node *head;
	head = (node*)malloc(sizeof(node));
	create(head);
	printf("\n");
	print(head);
	printf("\n");
	printf("\nNumber of the items = %d\n",count(head) );
	print(insert(head));		
	//嵌套调用insert,find函数，注意函数前后位置，及是否需要在主调函数中声明
	free(head);
	return 0;
}
