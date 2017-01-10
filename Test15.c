//2．字符串连接
//#include<stdio.h>
#include <stdio.h>

char *strcat(char *to, char *from);

void main()
{
  char str1[20] = "hello";
  char *str2 = "2008!";
  printf("%s\n", strcat(str1, str2)); // 输出hello2008!
}
char* strcat(char* to, char* from) // 字符串连接
{
   char* p1 = to,*p2 = from;
  while(*p1 != 0)
    p1++;
   while(*p2!=0)
    *p1++ = *p2++;
    //p2将值付给p1，然后p1，p2分别自加
  *p1 = 0;
  //p1末尾加‘\0’


   return to;
}
/*① char* strcat(char* to, char* from);
② while(*p1!= '\0' ) p1++  ;
③*p1++=*p2++;
④ *p1=0;
*/
