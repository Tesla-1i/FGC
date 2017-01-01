/*全局变量的应用：
题目：寻找数组中的最大值及下标
解析：函数返回最大值，将下标赋值给“全局变量”
*/

#include <stdio.h>
int row = 0, col = 0;	//全局变量，数组行，列值

int max_value(int a[][4]){
	int i,j,max;
	max = a[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(a[i][j] > max){
				max = a[i][j];
				row = i;
				col = j;
			}
		}
	}
	return max;
}

int main(){
	int a[3][4] = {{1,2,3,4},{5,12,7,8},{9,10,11,10}};
	int max;
	max = max_value(a);
	printf("Max value : %d (%d,%d)\n",max,row,col );
	return 0;
}
