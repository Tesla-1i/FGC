#include <stdio.h>
#include <stdlib.h>
#define NUL 0

//创建链表

struct linked_list
{
	int number;
	struct linked_list *next;
};					//;;;;;;;;
typedef struct linked_list node;

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

int main()
{
	node *head;
	head = (node*)malloc(sizeof(node));
	create(head);
	printf("\n");
	print(head);
	printf("\n");
	printf("\nNumber of the items = %d\n",count(head) );
	
	free(head);
	return 0;
}
