#include<stdio.h>

int max(int iarr1[],int in1)
{
    int imax1,itemp;
    if(in1>0)
    {
        itemp=max(iarr1,in1-1);
        if(itemp>iarr1[in1])
            imax1=itemp;
        else
            imax1=iarr1[in1];
    }
    else
        imax1=iarr1[0];
    return imax1;
}
int main()
{
    int in=6,imax;
    int iarr[6]={0,4,7,2,9,1};
    imax = max(iarr,in);
    printf("%d\n",imax);
    return 0;
}
