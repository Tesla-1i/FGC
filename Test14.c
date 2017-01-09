#include <stdio.h>
int n;
void func( )
{
   static int a=1;
   int b=5;
   a++;
   n+=10;
   b++;
   printf("a:%d  b:%d  n:%d\n",a,b,n);
}
int main( )
{
   int a = 0;
   int b = 10;
   printf("a:%d  b:%d  n:%d\n",a,b,n);
   b--;
   func( );
   printf("a:%d  b:%d  n:%d\n",a,b,n);
   n--;
   func( );
   return 0;
}
