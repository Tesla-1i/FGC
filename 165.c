#include<stdio.h>
int main()
{
        float fa=3.0f,fb=4.0f,fc;
        float add(float fa,float fb);//�����������ֺŲ���ʡ��
        fc = add(fa,fb);
        printf("%f\n",fc);
        return 0;
}
float add(float fa,float fb)
{
        return fa+fb;
}
