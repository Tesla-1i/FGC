//结构体指针的使用

#include<stdio.h>

struct invent
{
	char *name;
	int number;
	float price;
};
//typedef struct invent invented;

int main()
{
	struct invent product[3],*ptr;
	printf("input:\n");
	for(ptr = product;ptr < product + 3;ptr++)
	{
		scanf("%s %d %f",ptr->name,&ptr->number,&ptr->price);
		//&，注意有些要加&&&&&&
	}
	ptr = product;
	/*while(ptr < product + 3)
	{
		printf("%s %d %.2f\n",ptr->name,ptr->number,ptr->price);
		ptr++;
	}*/
	return 0;
}
