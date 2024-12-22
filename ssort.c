#include <stdio.h>
int main()
{
    int x, temp, k = 0;
    scanf("%d", &x);
    int a[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < x; j++)
    {
        int min = a[j];
        for (int l = j + 1; l < x; l++)
        {
            if (a[l] < min)
            {
                min = a[l];
                temp = a[j];
                a[j] = a[l];
                a[l] = temp;
            }
        }
    }
    for (int i = 0; i < x; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    int first = 0;
    int last = x - 1;
    int middle = (first + last) / 2;
    while (first <= last)
    {
        if (k < a[middle])
        {
            last = middle - 1;
            middle = (first + last) / 2;
        }
        else if (k>a[middle])
        {
            first = middle+1;
            middle = (first + last) / 2;
        }
        else if (k==a[middle]) 
       { printf("%d",middle);
        break;}
    
    }
}