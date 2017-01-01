#include<stdio.h>
#include<math.h>

float distance(float x1,float y1,float x2,float y2)
{
        float dis1,sum;
        sum=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
        dis1=sqrt(sum);
        return dis1;
}
int main()
{
        float x1,x2,y1,y2,dis;
        printf("input two point:\n");
        scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
        dis=distance(x1,y1,x2,y2);
        printf("(%.2f,%.2f),(%.2f,%.2f)æ‡¿Î:%f\n",x1,y1,x2,y2,dis);
        return 0;
}
