#include <stdio.h>
int strlen(char s[])
{
    int len = 0;
    for (int i = 0; s[i] != '\0'; ++i)
    {
        len++;
    }
    return len;
}
int strcmp(char s1[], char s2[])
{
    int k = 0;
    int x = strlen(s1);
    int y = strlen(s2);
    if (x != y)
        return 1;
    else
    {
        for (int i = 0; i < x; i++)
        {
            if (s1[i] != s2[i])
            {
                k = 1;
                break;
            }
        }
        if (k == 0)
            return 0;
        else
            return 1;
    }
}
int main()
{
    char a[]={"aaaaaaa"};
    char b[]={"aaaaaaa"};
    printf("%d",strcmp(a,b));
    
}