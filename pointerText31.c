#include <stdio.h>

void f(int *p){
	int i;
	for(i = 0; i < 5; i++)
        //p[i]++;
        ++(*(p+i));//ǰ�ÿ��ԡ����ô���

}

int main(){
    int i,*p;
	int a[5] = {1,2,3,4,5};
	p = a;
	f(p);
	for(i = 0; i < 5; i++)
		printf("��%d\n",a[i] );
	return 0;
}
