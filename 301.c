#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//通讯录类型声明并定义变量
typedef struct
{
	char num[5];
	char name[9];
	char sex[3];
	char phone[13];
	char addr[31];
}DataType;

//结点类型声明
typedef struct node
{
	DataType data;		//结构体嵌套
	struct node *next;	// node存在的原因
}ListNode;

typedef ListNode *LinkList;	//定义指向结点的指针类型LinkList;
LinkList head;
ListNode *p;	//两种写法含义相同

//函数声明
int menu_select();
LinkList CreateList();
void InsertNode(LinkList head, ListNode *p);
ListNode *ListFind(LinkList head);
void DelNode(LinkList head);
void printList(LinkList head);
void writeFile(LinkList head);
//主函数
void main()
{
	for(;;)
	{
		switch(menu_select())
		{
			case 1:
				printf("********************************\n");
				printf("通讯录链表初始化\n");
				printf("********************************\n");
				head = CreateList();
				break;
			case 2:
				printf("********************************\n");
				printf("通讯者信息添加\n");
				printf("********************************\n");
				printf("编号(4)姓名(8)性别(3)电话(11)地址(31)\n");
				printf("********************************\n");
				p = (ListNode *)malloc(sizeof(ListNode));
				scanf("%s %s %s %s %s",p->data.num,p->data.name,p->data.sex,p->data.phone,p->data.addr);
				InsertNode(head,p);
				break;
			case 3:
				printf("*********************************\n");
				printf("通讯录信息查询\n");
				printf("*********************************\n");
				p = ListFind(head);
				if (p != NULL)
				{
					printf("编号 姓名 性别 电话 地址\n");
					printf("------------------------------------------------\n");
					printf("%s %s %s %s %s\n",p->data.num,p->data.name,p->data.sex,p->data.phone,p->data.addr);
					printf("------------------------------------------------\n");
				}
				else
					printf("没有查到要查到的通讯者\n");
				break;
			case 4:
				printf("*********************************\n");
				printf("通讯录信息删除\n");
				printf("*********************************\n");
				DelNode(head);
				break;
			case 5:
				printf("*********************************\n");
				printf("通讯录链表输出\n");
				printf("*********************************\n");
				printList(head);
				break;
			case 6:
				printf("*********************************\n");
				printf("通讯录写入文件\n");
				printf("*********************************\n");
				writeFile(head);
				break;
			case 0:
				printf("\t 再见!\n");
				return;
		}
	}
}
/******************************/
/*		菜单选择函数程序	*/
/*****************************/
int menu_select()
{
	int sn;
	printf("有序通讯录管理系统\n");
	printf("===================\n");
	printf("1.通讯录链表初始化\n");
	printf("2.通讯结点插入\n");
	printf("3.通讯录结点查询\n");
	printf("4.通讯者结点删除\n");
	printf("5.通讯录链表输出\n");
	printf("6.通讯录写入文件\n");
	printf("0.退出通讯录系统\n");
	printf("==================\n");
	printf("请选择0~5\n");
	for(;;)
	{
		scanf("%d",&sn);
		if(sn<0 || sn>5)
			printf("输入错误 重选\n");
		else
			break;
	}
	return sn;
}
/******************************/
/*		初始化有序通讯录链表	*/
/*****************************/
LinkList CreateList()
{
	LinkList head = (ListNode *)malloc(sizeof(ListNode));
	head->next = NULL;
	return head;
}
/******************************/
/*		在链表中插入结点	*/
/*****************************/
void InsertNode(LinkList head,ListNode *p)
{
	ListNode *p1,*p2;
	p1 = head;
	p2 = p1->next;
	//p2指向第一个编号大于p指向的结点的结点
	while(p2 != NULL && strcmp(p2->data.num, p->data.num) < 0)
	{
		p1 = p2;
		p2 = p2->next;
		//p1指向刚访问过的结点 p2指向下一个结点
	}
	//插入到P1所指结点之后，p2所指结点之前
	p1->next = p;
	p->next = p2;
}
/******************************/
/*		通讯录链表查找	*/
/*****************************/
ListNode *ListFind(LinkList head)
{
	ListNode *p;
	char num[5];
	char name[9];
	int xz;
	printf("=============================\n");
	printf("1.按编号查询\n");
	printf("2.按姓名查询\n");
	printf("=============================\n");
	printf("请选择\n");
	p = head->next;
	scanf("%d",&xz);
	if(xz == 1)
	{
		printf("请输入要查找的编号\n");
		scanf("%s",num);
		while(p && strcmp(p->data.num,num)<0)
			p = p->next;
		if((p==NULL) || strcmp(p->data.num,num) != 0)
			p = NULL;
	}
	else if(xz == 2)
	{
		printf("输入要查找的姓名\n");
		scanf("%s",name);
		while(p && strcmp(p->data.name,name) != 0)
			p = p->next;
	}
	return p;
}
/*******************************/
/*		通讯录链表结点删除	*/
/*****************************/
void DelNode(LinkList head)
{
	char jx;
	ListNode *p, *q;
	p = ListFind(head);
	if(p == NULL)
	{
		printf("没有查到要删除的通讯者\n");
		return;
	}
	printf("真的要删除该结点吗\n");
	scanf("%c",&jx);
	scanf("%c",&jx);
	if(jx == 'y' || jx == 'Y')
	{
		q = head;
		while((q != NULL) && (q->next != p))
			q = q->next;
		q->next = p->next;
		free(p);
		printf("通讯者已被删除\n");
	}
}
/******************************/
/*		通讯录链表的输出	*/
/*****************************/
void printList(LinkList head)
{
	ListNode *p;
	p = head->next;
	printf("编号 姓名 性别 联系电话 地址\n");
	printf("------------------------------------\n");
	while(p != NULL)
	{
		printf("%s %s %s %s %s\n",p->data.num,p->data.name,p->data.sex,p->data.phone,p->data.addr);
		printf("------------------------------------------------\n");
		p = p->next;
	}
}
/******************************/
/*		通讯录链表写入文件	*/
/*****************************/
void writeFile(LinkList head)
{
	ListNode *p;
	FILE *fp;
	if((fp=fopen("d:\\file.txt","wb")) == NULL);
	{
		printf("\ncant open file strike any key return \n");
		getch();
		return;
	}
	p = head->next;
	while(p != NULL)
	{
		fwrite(p,sizeof(ListNode),1,fp);
		p = p->next;
	}
	fclose(fp);
}
