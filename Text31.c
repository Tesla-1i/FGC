/*选择排序*/

#include <stdio.h>

int main(){
	int i, j, temp, min, n = 5;
	int a[5] = {2, 4, 1, 6, 2};
	for(i = 0; i < n - 1; i++){
		min = i;	//假设最小是i
		for(j = i+1; j < n; j++)
			if(a[j] < a[min])
				min = j;
		if(min != i){
			temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
	}
	for(i = 0; i < n; i++)
		printf("%d\n",a[i] );
	return 0;
}
