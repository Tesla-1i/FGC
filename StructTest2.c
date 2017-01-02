/*结构体练习；
输入10本书的名称，单价。按照单价由低到高排序，输出
*/

#include <stdio.h>
#define N 3		//不能有分号；；；

struct book
{
	char name[N];
	float price;

};

int main(){
	struct book books[N], temp;
	int i, j;
	for(i = 0;i < N; i++){
		printf("please input number %d 's name & price\n",i+1 );
		printf("Name\n");
		fflush(stdin);
		gets(books[i].name);
		printf("Price\n");
		scanf("%f", &books[i].price);
	}
	//自己的方法也对
	for(i = 1; i < N; i++){
		for(j = 1; j <= N-i; j++){
			if(books[j-1].price > books[j].price){
				temp = books[j-1];
				books[j-1] = books[j];
				books[j] = temp;
			}
		}
	}
	printf("\noutput:\n");
	for(i = 0; i < N; i++){
		printf("Name %s Price %.2f\n", books[i].name, books[i].price);
	}
	return 0;
}
