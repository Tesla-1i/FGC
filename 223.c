#include<stdio.h>
#include<string.h>

int main()
{

    char cArryName[5][20]={"Zhang","Li","Wang","Zhao","Qian"};
    char cArryTemp[20];
    int imin,i1,i2;
    for(i1=0;i1<4;i1++)
    {
        imin = i1;
        for(i2=i1+1;i2<5;i2++)
        {
            if(strcmp(cArryName[imin],cArryName[i2])>0)
                imin = i2;
        }
        if(i1!=imin)
        {
            strcpy(cArryTemp,cArryName[i1]);
            strcpy(cArryName[i1],cArryName[imin]);
            strcpy(cArryName[imin],cArryTemp);
        }
    }
    for(i1=0;i1<5;i1++)
        puts(cArryName[i1]);
    return 0;
}
