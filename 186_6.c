#include<stdio.h>

void d2b(int n)
{
    if(n>1)
    {
        d2b(n/2);
        printf("%d",n%2);//×¢Òâµİ¹éºÍprintfµÄË³Ğò
    }
    else
        printf("%d",n);
}
int main()
{
    int n;
    printf("input number: ");
    scanf("%d",&n);
    d2b(n);
    return 0;
}
