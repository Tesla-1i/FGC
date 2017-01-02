/*链表的应用
题目：输入字符，逆序建立链表，输出链表，释放所有结点
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	struct node
	{
		char info;
		struct node *link;
	}*top, *p;
	char c;
	top = NULL;
	while((c=getchar()) != '\n'){
		p = (struct node*)malloc(sizeof(struct node));
		p->info = c;
		p->link = top;
		top = p;
	}
	while(top){
		p = top;
		top = top->link;
		putchar(p->info);
		free(p);
	}
	return 0;
}