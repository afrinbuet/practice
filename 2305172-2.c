#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int a1[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &a1[i]);
    }
    int y;
    scanf("%d", &y);
    int a2[y];
    for (int i = 0; i < y; i++)
    {
        scanf("%d", &a2[i]);
    }
    printf("Initial order : ");
    for (int k = 0; k < x; k++)
    {
        printf("%d ", a1[k]);
    }
    printf("\n");
    for (int k = 0; k < y; k++)
    {
        if (a2[k] < 0)
        {
            {
                a2[k] = (a2[k] * (-1));
            }

            for (int l = 0; l < a2[k]; l++)
            {
                int temp = a1[0];
                for (int m = 0; m < x - 1; m++)
                {
                    a1[m] = a1[m + 1];
                }
                a1[x - 1] = temp;
            }
        }
        else
        {

            for (int l = 0; l < a2[k]; l++)
            {
                {
                    int temp = a1[x - 1];
                    for (int s = x - 1; s >= 1; s--)

                    {
                        a1[s] = a1[s - 1];
                    }
                    a1[0] = temp;
                }
            }
        }
        printf("After instruction %d : ", k + 1);
        for (int p = 0; p < x; p++)
        {
            printf("%d ", a1[p]);
        }
        printf("\n");
    }
    int max = a1[0];
    int c = 0;
    for (int b = 0; b < x; b++)
    {
        if (a1[b] > max)

        {
            max = a1[b];
            c = b;
        }
    }
    printf("Winner : Child  %d", c + 1);
}