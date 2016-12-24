#include <stdio.h>
#include <stdlib.h>
#define NUL 0

struct linked_list
{
	int number;
	struct linked_list *next;
};					//;;;;;;;;
typedef struct linked_list node;

/******************************/

//删除结点
node *delete(node *head)
{
	node *find(node *p,int a);		//声明find 函数
	int key;						//要删除的数据项
	node *n1;						//指向关键节点前的结点的指针
	node *p;						//临时指针
	printf("\n What is the item (number) to be deleted?\n");
	scanf("%d",&key);
	if(head->number == key)			//删除第一个结点
	{
		p = head->next;				//指向第二个结点
		free(head);
		head = p;					//使head指向新的第一个结点
	}
	else{
		n1 = find(head,key);
		if(n1 == NUL)
			printf("\nkey is not found\n");
		else{
			p = n1->next->next;		//指向关键结点的后一个结点
			free(n1->next);
			n1->next = p;			//使关键节点前一个结点指向关键节点后一个节点
		}
	}
	return(head);
}


/*************************/

//插入结点

node *find(node *list,int key)
{
	if(list->next->number == key)
		return(list);
	else if(list->next->next == NUL)
		return(NUL);
	else
		find(list->next,key);		//递归
}

node *insert(node *head)
{
	node *find(node *p,int a);//不要忘记；；；；；；；
	node *new;
	node *n1;
	int key;
	int x;
	printf("Value of new item?\n");
	scanf("%d",&x);
	printf("Value of key item?");
	scanf("%d",&key);
	if(head->number == key)
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
	print(delete(head));
	return 0;
}
