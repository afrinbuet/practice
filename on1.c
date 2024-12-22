#include <stdio.h>

int main()
{
    char a1[100], a2[100], a3[100];
    scanf("%*c%[^\n]", a1);
    printf("%s",a1);
}