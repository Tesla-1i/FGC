#include<stdio.h>

void printnchars(int i,char word)
{
        int j;
        for(j=0;j<i;j++)
                printf("%c\t",word);
}
int main()
{
        char word;
        int i;
        printf("input number and word:\n");
        scanf("%d %c",&i,&word);//Ò»ÆðÊäÈë

        printnchars(i,word);
        return 0;
}
