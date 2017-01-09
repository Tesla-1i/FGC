#include <stdio.h>
#include <cstdlib>

/*int main(){
    int k = 3, sum = 0;
    switch(k--){
        default:break;
        case 1:sum += k;
        case 2:
        case 3:sum += k;
            break;
    }
    /*switch(k--)首先k不变，找到case 3，然后k--，
     * case3执行语句，sum=0+2，而不是0+3
    printf("总值sum = %d\n",sum);
    return 0;
}

int main(){
    FILE *fp;
    char ch, fname[10];
    printf("Input name of file\n");
    gets(fname);
    if ((fp = fopen(fname,"w")) == NULL)
        //fopen函数，文件名可以是输入的
    {
        printf("can not open\n");
        exit(0);
    }
    printf("Input data\n");
    while((ch = getchar()) != '!')
        fputc(ch, fp);
    fclose(fp);
    return 0;
}

void swap(int *p, int *q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main(){
    int a, b, c;
    printf("input 3 number 输入三个不相等的数\n");
    scanf("%d %d %d",&a, &b, &c);
    if(a < b)
        swap(&a, &b);
    if(a < b)
        swap(&a, &c);
    if(b < c)
        swap(&b, &c);
    printf("由大到小排序: %d %d %d\n",a, b, c);
    return 0;
}*/

//计算字符串中子串出现的次数

#include <string.h>

int main(){
    char str1[20], str2[20];
    char *p1, *p2;
    int sum = 0;
    printf("请输入两个字符串:\n");
    scanf("%s",str1);
    scanf("%s",str2);
    p1 = str1;
    p2 = str2;
    while (*p1 != '\0'){
        if(*p1 == *p2){
            while (*p1 == *p2 && *p2 != '\0'){
                p1++;
                p2++;
            }
        }
        else
            p1++;   //当不符合要求时，p1指向下一个字符
        if (*p2 == '\0')    //p1，p2一一比较至p2结束，全部符合
            sum++;
        p2 = str2;      //p2重新指向str2的头
    }
    printf("sum = %d\n",sum);
    return 0;
}