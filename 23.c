#include <stdio.h>
int main()
{
    int x;
    int *p;
    scanf("%d",&x);
    for (int i=0;i<x;i++)
    {
      scanf("%d", *(p+i));
    }
     for (int i=0;i<x;i++)
    {
      printf("%d   ", *(p+i));
    }
}