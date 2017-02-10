#include<stdio.h>

int main()
{

    FILE *fp;
    int k, n, a[6] = {1,2,3, 4, 5, 6};
    fp = fopen("txt2","w+");
    fprintf(fp,"%d%d\n",a[0],a[1],a[2]);
    fprintf(fp,"%d%d%d\n",a[3],a[4],a[5]);
    fclose(fp);
    fp = fopen("txt2","r");
    fscanf(fp,"%d%d\n",&k,&n);
    printf("%d %d\n",k, n);
    return 0;
}
