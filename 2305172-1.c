#include <stdio.h>
int main()
{
    int x, a, b, count = 0;
    scanf("%d", &x);
    int arr1[x], arr2[x];

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {

            for (int k = 0; k < x; k++)
            {
                if (arr1[i] == arr2[k])
                    a = k;
                if (arr2[k] == arr1[j])
                    b = k;
            }
            if (a < b)
                count++;
        }
    }
    printf("%d", count);
}