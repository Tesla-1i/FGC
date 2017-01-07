/*链表的应用
删除链表中第一个成绩为score的学生，同时返回头指针
*/
struct student* deleteByScore(struct student*h, float score){
	struct student* p = h;
	struct student* q;
	q = p;
	if(p->score == score){
		q = q->next;
		free(p);
		return (h = q);
		//第一个节点既是目标
	}
	while(p->next != NULL){
		q = p;
		p = p->next;	//p指向下一个节点
		if(p->score == score)	//如果下一个节点是目标；
		{
			printf("delete NO.%d\n",p->num );
			q->next = p->next;	//将目标前后的节点联系起来。然后释放q
			free(p);
			return h;
		}
	}
	printf("Not Found!\n");
}


