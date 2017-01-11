
#include<stdio.h>
 
union variant            
  char c;                 
  int i;                  
};
union variant x; /* 定义共用体变量，这里定义为全局变量，所以变量的全部字节的初值都为0 */
 
int main()
{
  x.c='A';             /* 为共用体变量中的字符型成员赋值 */
  printf("%d\n",x.i);            /* 此时共用体变量4个字节的取值情况为0x00000041 */
         /* 为共用体变量中的整型成员赋值，0x42为字母B的ASCII码*/
  printf("%c\n",x.c);
  return 0;
}
