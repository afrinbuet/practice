#include <stdio.h>
#include <time.h>
#include <stdlib.h>
char p1[] = {"There is a secret code"};
char p2[] = {"Attack at dawn"};
char p3[] = {"Meet me at the park"};
char a1[] = {"listen"};
char a2[] = {"earth"};
char a3[] = {"binary"};
char n1[] = {"program"};
char n2[] = {"network"};
char n3[] = {"science"};
int strlen(char s[])
{
    int len = 0;
    for (int i = 0; s[i] != '\0'; ++i)
    {
        len++;
    }
    return len;
}
void scramble(char s[])
{
    int x = strlen(s);
    int k = 0;
    int arr1[x];
    char arr2[x];
    for (int m = 0; m < x; m++)
    {
        arr1[m] = -1;
    }
    while (x > 0)
    {
        int p = 0;
        int ran = rand() % (strlen(s));
        for (int j = 0; j < (strlen(s)); j++)
        {
            if (arr1[j] == ran)
            {
                p = 1;
                break;
            }
        }
        if (p == 0)
        {
            arr2[k] = s[ran];
            arr1[k] = ran;
            k++;
            x--;
        }
    }
    for (int l = 0; l < strlen(s); l++)
    {
        printf("%c", arr2[l]);
    }
    printf("\n");
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
int word1(char s1[])
{
    int score = 0;
    for (int i = 1; i <= 3; i++)
    {
        printf("Your guess : ");
        char x[100];
        scanf("%s", x);
        if (strcmp(x, s1) == 0)
        {
            printf("Correct ! You have solved it in %d attempts(s)", i);
            score = score + 10 + 10 * (3 - i);
            break;
        }
        else if (strcmp(x, s1) == 1 && i == 3)
            printf("Ooops ! Correct ans : %s", s1);

        else
            printf("Incorrect ! Try again.\n");
    }
    return score;
}
int anagram()
{
    int a;
    srand(time(NULL));
    int l;
    printf("\nStarting Anagram Challenge...\nScrambled word : ");
    int h = rand() % 3;
    switch (h)
    {
    case 0:
        scramble(a1);
        a = word1(a1);
        break;
    case 1:
        scramble(a2);
        a = word1(a2);
        break;
    case 2:
        scramble(a3);
        a = word1(a3);
        break;
    }
    return a;
}
void encrypt(char s[],int p)
{
    int x = strlen(s);
    char a[x+1];
    for (int i = 0; i < x; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            a[i] = (s[i] - 'a' + p) % 26 + 'a';
        else if (s[i] >= 'A' && s[i] <= 'Z')
            a[i] = (s[i] - 'A' + p) % 26 + 'A';
        else
            a[i] = s[i];
    }
    a[x]='\0';
    for (int j = 0; j < x; j++)
    {
        printf("%c", a[j]);
    }
}
void decrypt(char s[], int p)
{
    int n = strlen(s);
    char a[n+1];
    for (int i = 0; i < n; i++)
    {
       if (s[i] >= 'a' && s[i] <= 'z')
            a[i] = (s[i] - 'a' - p) % 26 + 'a';
        else if (s[i] >= 'A' && s[i] <= 'Z')
            a[i] = (s[i] - 'A' - p) % 26 + 'A';
        else
            a[i] = s[i]; 
    }
    a[n]='\0';
    for (int j = 0; j < n; j++)
    {
        printf("%c", a[j]);
    }
}


int random()
{
    srand(time(NULL));
    int ran = (rand() % 26) ;
    return ran;
}
int word2(char s1[])
{
    int score = 0;
    for (int i = 1; i <= 3; i++)
    {
        printf("\nYour guess : ");
        char x[100];
        scanf("%*c%[^\n]", x);
        if (strcmp(x, s1) == 0)
        {
            printf("Correct ! You have decrypted it in %d attempts(s)", i);
            score = score + 10 + 10 * (3 - i);
            break;
        }
        else if (strcmp(x, s1) == 1 && i == 3)
            printf("Ooops ! Correct ans : ");

        else
            printf("Incorrect ! Try again.");
    }
    return score;
}
int ceaser()
{
    int a;
    srand(time(NULL));
    int l;
    int d=random();
    printf("\n\nStarting Ceaser Cipher Challenge..(shift %d)\n",d);
    printf("Encrypted phrase : ");
    int h = rand() % 3;
    switch (h)
    {
    case 0:
        encrypt(p1,d);
        a = word2(p1);
        break;
    case 1:
        encrypt(p2,d);
        a = word2(p2);
        break;
    case 2:
        encrypt(p3,d);
        a = word2(p3);
        break;
    }
    return a;
}
int substr(char s1[], char s2[])
{
    int n = strlen(s2), m = strlen(s1);
    int j;
    for (int i = 0; i < n - m + 1; i++)
    {

        for (j = 0; j < m; j++)
        {
            if (s2[i + j] != s1[j])
                break;
        }
        if (j == m)
            return 1;
    }
    return 0;
}
int strcpy(char s2[], char s1[])
{
    int n = strlen(s1);
    for (int i = 0; i < n; i++)
    {
        s2[i] = s1[i];
    }
    return n;
}

int option(char s[])
{
    int score = 0;
    int x, m = 0, n = 0, k = 0;
    for (int j = 1; j <= 3; j++)
    {
        int i = 1;
        printf("Select an option :\n1.Write answer\n2.Check substring\n3.Check length\n");
        while (i <= 3)
        {
            scanf("%d", &x);
            if (x == 1)
            {
                i++;
                char w[100];
                scanf("%*c%[^\n]", w);
                if (strcmp(s, w) == 0)
                {
                    printf("Correct ! You guessed it in %d attempt(s) using %d utility\n", j, m + n);
                    k = 1;
                    score = 10 + (3 - j) * 10 - (m + n) * 2;
                    break;
                }
                else
                {
                    if (j != 3)
                        printf("Incorrect ! Try again\n");
                    else
                        printf("Oops ! Correct ans : %s\n", s);
                    break;
                }
            }
            else if (x == 3 && n == 0)
            {
                i++;
                int l;
                n = 1;
                printf("Enter length : ");
                scanf("%d", &l);
                if (strlen(s) == l)
                    printf("Yes.\n");
                else
                    printf("No.\n");
            }
            else if (x == 2 && m == 0)
            {
                i++;
                char a[100];
                m = 1;
                printf("Enter substring : ");
                scanf("%*c%[^\n]", a);
                if (substr(a, s) != 0)
                {
                    printf("Yes.\n");
                }
                else
                    printf("No.\n");
            }
            else
                printf("Error : Utility function already used\n");
        }
        if (k == 1)
            break;
    }
    return score;
}
int word_guess()
{
    int x = 0;
    printf("\n\nStarting Word Guessing Challenge...\n");
    int h = rand() % 3;
    switch (h)
    {
    case 0:
        printf("Hint : %c%c%c___\n", n1[0], n1[1], n1[2]);
        x = option(n1);
        break;
    case 1:
        printf("Hint : %c%c%c___\n", n2[0], n2[1], n2[2]);
        x = option(n2);
        break;
    case 2:
        printf("Hint : %c%c%c___\n", n3[0], n3[1], n3[2]);
        x = option(n3);
        break;
    }
    return x;
}
int show_menu()
{
    int n;
    printf("Welcome to the Game of World!\n1.Start Game\n2.Exit\nEnter your choice : ");
    scanf("%d", &n);
    return n;
}
int main()
{
    int num = show_menu();
    if (num == 2)
    {
        printf("GAME EXITED!");
        return 0;
    }
    else if (num != 1)
    {
        printf("INVALID INPUT!");
        return 0;
    }
    printf("%d",random());
    int mot;
    int g = anagram();
    int h = ceaser();
    int r = word_guess();
    printf("\nGame Over !\n");
    if ((g!=0) && (h!=0 )&& (r!=0))
     mot=g+h+r+5;
     else mot=g+h+r;
    printf("Your total score : %d",mot);
}