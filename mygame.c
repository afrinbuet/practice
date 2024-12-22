#include <stdio.h>
#include <stdlib.h>
char lis[] = "listen";
char ear[] = "earth";
char bin[] = "binary";
int length(char a[])
{
    int len = 0;
    for (int i = 0; a[i] < '\0'; i++)
    {
        len++;
    }
    printf("%d",len);    return len;
}
void scramble(char s1[])
{
    int x = length(s1);
    int a[x];
    char arr[x];
    int ss1 = 0, score = 0;
    while (x > 0)
    {
        int r = 0;
        int s = 0;
        int p = rand() % x;
        for (int k = 0; k < length(s1); k++)
        {
            if (s1[k] == p)
            {
                s = 1;
                break;
            }
        }
        if (s == 0)
        {
            arr[r] = s1[p];
            printf("%c", s1[p]);
            a[r] = p;
            x--;
            r++;
        }
    }
    printf("\n");
    for (int h = 0; h < 3; h++)
    {
        int d = 0;
        printf("Your guess : ");
        char word[100];
        gets(word);
        int y = length(word);
        if (y != x)
            break;
        else
            for (int l = 0; l < x; l++)
            {
                if (arr[l] != word[l])
                {
                    d = 1;
                    break;
                }
            }
        if (d == 0)
        {
            printf("Correct ! You solved it in %d attempt(s).", h + 1);
            ss1 = 10;
            score = ss1 + (2 - h) * 10;
            break;
        }
        else
            printf("Incorrect ! Try again");
    }
}
void ana_c()
{
    printf("Starting Anagram Challenge...\n");
    printf("Scrambled word : ");
    // int p = rand() % 3;
    // int f;
    // switch (p)
    // {
    // case 0:
        //  scramble(lis);
    //     break;
    // case 1:
    //      f = scramble(ear);
    //     break;
    // case 2:
    //     f=scramble(bin);
    // }
    //  printf("%d",f);
    length(lis);
}

int show_menu()
{
    int n;
    printf("Welcome to the Game of World!\n");
    printf("1.Start Game\n2.Exit\n");
    printf("Enter your choice : ");
    scanf("%d", &n);
    return n;
}
int main()
{
    int num = show_menu();
    if (num == 0)
        return 0;
    printf("\n\n");
    
}