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
    /*switch(k--)����k���䣬�ҵ�case 3��Ȼ��k--��
     * case3ִ����䣬sum=0+2��������0+3
    printf("��ֵsum = %d\n",sum);
    return 0;
}

int main(){
    FILE *fp;
    char ch, fname[10];
    printf("Input name of file\n");
    gets(fname);
    if ((fp = fopen(fname,"w")) == NULL)
        //fopen�������ļ��������������
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
    printf("input 3 number ������������ȵ���\n");
    scanf("%d %d %d",&a, &b, &c);
    if(a < b)
        swap(&a, &b);
    if(a < b)
        swap(&a, &c);
    if(b < c)
        swap(&b, &c);
    printf("�ɴ�С����: %d %d %d\n",a, b, c);
    return 0;
}*/

//�����ַ������Ӵ����ֵĴ���

#include <string.h>

int main(){
    char str1[20], str2[20];
    char *p1, *p2;
    int sum = 0;
    printf("�����������ַ���:\n");
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
            p1++;   //��������Ҫ��ʱ��p1ָ����һ���ַ�
        if (*p2 == '\0')    //p1��p2һһ�Ƚ���p2������ȫ������
            sum++;
        p2 = str2;      //p2����ָ��str2��ͷ
    }
    printf("sum = %d\n",sum);
    return 0;
}