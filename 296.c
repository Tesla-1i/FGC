#include <stdio.h>
#define N 6

void selectSort(int a[], int n)
{
    int i, j, minFlag, temp;
    for(i = 0; i < n - 1; i++)
    {
        minFlag = i;
        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[minFlag])
                minFlag = j;
            if(i != minFlag)
            {
                temp = a[minFlag];
                a[minFlag] = a[i];
                a[i] = temp;
            }
        }
    }
}

int main()
{
    int i, a[N] = {8,4,3,9,6,2};
    selectSort(a, 6);       //  只传入数组名，无【】
    for(i = 0; i < 6; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}