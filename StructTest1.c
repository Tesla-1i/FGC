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
	for(i = 0; i < N-1; i++){
		for(j = 0; j < N-i-1; j++){
			if(books[j].price > books[j+1].price){
				temp = books[j];
				books[j] = books[j+1];
				books[j+1] = temp;
			}
		}
	}
	printf("\noutput:\n");
	for(i = 0; i < N; i++){
		printf("Name %s Price %.2f\n", books[i].name, books[i].price);
	}
	return 0;
}
