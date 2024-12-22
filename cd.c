#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a[x];
    for (int i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    int y;
    scanf("%d",&y);
    for (int j=1;j<=y;j++)
    {
        int temp=a[0];
        for (int k=0;k<x-1;k++)
        {
            a[k]=a[k+1];
        }
        a[x-1]=temp;
    }
       for (int i=0;i<x;i++)
    {
        printf("%d ",a[i]);
    }
}