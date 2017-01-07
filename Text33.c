/*字符串程序
将字符串s1中出现在s2中的字符删除
*/

#include <stdio.h>
#include <string.h>

void fun(char *s1, char *s2){
	int i, j, k;
	for(i = 0; i < strlen(s2); i++){
		for(j = 0; j < strlen(s1); j++){
			if(s1[j] == s2[i]){
				for(k = j; k < strlen(s1) - 1; k++){
					s1[k] = s1[k+1];
					s1[strlen(s1)-1] = '\0';
				}
			}
		}
	}
}

int main(){
	char s1[200], s2[200];  //以后用字符数组装字符串
	printf("输入s1,\n");
	//gets(s1);

	scanf("%s",s1);
	printf("输入s2\n");
	gets(s2);

	scanf("%s",s2);
	fun(s1, s2);
	puts(s1);

	return 0;
}
