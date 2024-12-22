#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char listen[] = "listen";
char earth[] = "earth";
char binary[] = "binary";
char code[] = "There is a secret code";
char attack[] = "Attack at dawn";
char meet[] = "Meet me at the park";
char program[] = "program";
char network[] = "network";
char science[] = "science";

int stringLen(char ch[])
{
    int i = 0;
    while (ch[i] != '\0')
    {
        i++;
    }
    return i;
}
int string_compare(char ch1[], char ch2[])
{
    int i = 0, flag = 0;
    while (ch1[i] != '\0' && ch2[i] != '\0')
    {
        if (ch1[i] != ch2[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return 0;
    else
        return 1;
}

int check_subs(char ch1[], char ch2[])
{
    int i, j;
    for (i = 0; ch1[i] != '\0'; i++) // searching start of substr
    {
        for (j = 0; ch2[j] != '\0'; j++) // searching match of ch2[j] in ch1[i]
        {
            if (ch1[i + j] != ch2[j]) // searching mismatch of ch2[j] in ch1[i]
            {
                break;
            }
        }
        if (ch2[j] == '\0')
        {
            return 1; // cause no mismatch of ch2 in ch1
        }
    }
    return 0; // both loop end ,means ch2 wasn't in ch1
}

int word_guess()
{
    int score = 0;
    printf("Starting Word Guessing Challenge...\n");
    srand(time(0));
    int random = rand() % 3; // random number generation
    if (random == 0)
    {
        int j; // attempt variable
        printf("Hint: pro_____\n");
        printf("Select an option: 1. Write answer 2. Check Substring 3. Check Length\n"); // option showing
        for (j = 1; j <= 3; j++)                                                          // attempt loop
        {
            int option = 0, flag = 0, used2 = 0, used3 = 0, comparison = 0;
            while (option == 1) // until writing answer,loop will looping
            {
                scanf("%d", &option); // option selecting
                if (option == 1)      // write answer
                {
                    char inp[80];
                    scanf(" %[^\n]", inp); // taking input
                    int comparison = string_compare(program, inp);
                    if (comparison == 1) // here all element matched, printing yesyes
                    {
                        if ((used2 + used3) == 0)
                        {
                            printf("Correct! You solved it in %d attempt(s) using zero utility function.\n", j);
                            flag = 1;
                            break;
                        }
                        else if ((used2 + used3) == 1)
                        {
                            printf("Correct! You solved it in %d attempt(s) using one utility function.\n", j);
                            flag = 1;
                            break;
                        }
                        else
                        {
                            printf("Correct! You solved it in %d attempt(s) using two utility functions.\n", j);
                            flag = 1;
                            break;
                        }
                    }
                    else if (comparison == 0 && j == 3) // all wrong answer input
                    {
                        printf("Incorrect! The correct answer is program\n");
                    }
                    else // wrong answer input
                    {
                        printf("Incorrect! Try again.\n");
                    }
                }
                else if (option == 2) // substring hint taking
                {
                    if (used2 == 1)
                    {
                        printf("Error: Utility function already used");
                    }
                    else
                    {
                        printf("Enter substring: ");
                        char inp[80];
                        scanf(" %[^\n]", inp); // input substring
                        int check = check_subs(program, inp);
                        if (check == 1)
                            printf("Yes\n"); // substring exist
                        else
                            printf("No\n"); // substring DNE
                        used2 = 1;          // used2 used
                    }
                }
                else // length hint taking
                {
                    if (used3 == 1)
                    {
                        printf("Error: Utility function already used");
                    }
                    else
                    {
                        printf("Enter length: ");
                        int len;
                        scanf("%d", &len);                  // length guessing
                        int stringlen = stringLen(program); // storing main length
                        if (stringlen == len)
                        {
                            printf("Yes"); // length matched
                        }
                        else
                        {
                            printf("No"); // length didn't matched
                        }
                    }
                }
            }
            if (flag == 1) // we found answer
            {
                score = (4 - j) * 10 - (used2 + used3) * 2;
                break;
            }
        }
    }
    else if (random == 1)
    {

        int j; // attempt variable
        printf("Hint: net_____\n");
        printf("Select an option: 1. Write answer 2. Check Substring 3. Check Length\n"); // option showing
        for (j = 1; j <= 3; j++)                                                          // attempt loop
        {
            int option = 0, flag = 0, used2 = 0, used3 = 0, comparison = 0;
            while (option == 1) // until writing answer,loop will looping
            {
                scanf("%d", &option); // option selecting
                if (option == 1)      // write answer
                {
                    char inp[80];
                    scanf(" %[^\n]", inp); // taking input
                    int comparison = string_compare(network, inp);
                    if (comparison == 1) // here all element matched, printing yesyes
                    {
                        if ((used2 + used3) == 0)
                        {
                            printf("Correct! You solved it in %d attempt(s) using zero utility function.\n", j);
                            flag = 1;
                            break;
                        }
                        else if ((used2 + used3) == 1)
                        {
                            printf("Correct! You solved it in %d attempt(s) using one utility function.\n", j);
                            flag = 1;
                            break;
                        }
                        else
                        {
                            printf("Correct! You solved it in %d attempt(s) using two utility functions.\n", j);
                            flag = 1;
                            break;
                        }
                    }
                    else if (comparison == 0 && j == 3) // all wrong answer input
                    {
                        printf("Incorrect! The correct answer is network\n");
                    }
                    else // wrong answer input
                    {
                        printf("Incorrect! Try again.\n");
                    }
                }
                else if (option == 2) // substring hint taking
                {
                    if (used2 == 1)
                    {
                        printf("Error: Utility function already used");
                    }
                    else
                    {
                        printf("Enter substring: ");
                        char inp[80];
                        scanf(" %[^\n]", inp); // input substring
                        int check = check_subs(network, inp);
                        if (check == 1)
                            printf("Yes\n"); // substring exist
                        else
                            printf("No\n"); // substring DNE
                        used2 = 1;          // used2 used
                    }
                }
                else // length hint taking
                {
                    if (used3 == 1)
                    {
                        printf("Error: Utility function already used");
                    }
                    else
                    {
                        printf("Enter length: ");
                        int len;
                        scanf("%d", &len);                  // length guessing
                        int stringlen = stringLen(network); // storing main length
                        if (stringlen == len)
                        {
                            printf("Yes"); // length matched
                        }
                        else
                        {
                            printf("No"); // length didn't matched
                        }
                    }
                }
            }
            if (flag == 1) // we found answer
            {
                score = (4 - j) * 10 - (used2 + used3) * 2;
                break;
            }
        }
    }
    else
    {

        int j; // attempt variable
        printf("Hint: sci_____\n");
        printf("Select an option: 1. Write answer 2. Check Substring 3. Check Length\n"); // option showing
        for (j = 1; j <= 3; j++)                                                          // attempt loop
        {
            int option = 0, flag = 0, used2 = 0, used3 = 0, comparison = 0;
            while (option == 1) // until writing answer,loop will looping
            {
                scanf("%d", &option); // option selecting
                if (option == 1)      // write answer
                {
                    char inp[80];
                    scanf(" %[^\n]", inp); // taking input
                    int comparison = string_compare(science, inp);
                    if (comparison == 1) // here all element matched, printing yesyes
                    {
                        if ((used2 + used3) == 0)
                        {
                            printf("Correct! You solved it in %d attempt(s) using zero utility function.\n", j);
                            flag = 1;
                            break;
                        }
                        else if ((used2 + used3) == 1)
                        {
                            printf("Correct! You solved it in %d attempt(s) using one utility function.\n", j);
                            flag = 1;
                            break;
                        }
                        else
                        {
                            printf("Correct! You solved it in %d attempt(s) using two utility functions.\n", j);
                            flag = 1;
                            break;
                        }
                    }
                    else if (comparison == 0 && j == 3) // all wrong answer input
                    {
                        printf("Incorrect! The correct answer is science\n");
                    }
                    else // wrong answer input
                    {
                        printf("Incorrect! Try again.\n");
                    }
                }
                else if (option == 2) // substring hint taking
                {
                    if (used2 == 1)
                    {
                        printf("Error: Utility function already used");
                    }
                    else
                    {
                        printf("Enter substring: ");
                        char inp[80];
                        scanf(" %[^\n]", inp); // input substring
                        int check = check_subs(science, inp);
                        if (check == 1)
                            printf("Yes\n"); // substring exist
                        else
                            printf("No\n"); // substring DNE
                        used2 = 1;          // used2 used
                    }
                }
                else // length hint taking
                {
                    if (used3 == 1)
                    {
                        printf("Error: Utility function already used");
                    }
                    else
                    {
                        printf("Enter length: ");
                        int len;
                        scanf("%d", &len);                  // length guessing
                        int stringlen = stringLen(science); // storing main length
                        if (stringlen == len)
                        {
                            printf("Yes"); // length matched
                        }
                        else
                        {
                            printf("No"); // length didn't matched
                        }
                    }
                }
            }
            if (flag == 1) // we found answer
            {
                score = (4 - j) * 10 - (used2 + used3) * 2;
                break;
            }
        }
    }
    return score;
}
int score_count(int score1, int score2, int score3)
{
    int score;
    score = score1 + score2 + score3;
    if (score1 >= 10 && score2 >= 10 && score3 >= 6)
        score = score + 5;
    return score;
}

int show_menu()
{
    printf("Welcome to the Game World!\n1. Start Game\n2. Exit\nEnter your choice: ");
    int n;
    scanf("%d",&n);//entering choice
    return n;
}
int main()
{
    int option;
    option = show_menu();
    if (option == 2)
        return 0;
    int score, score1 = 0, score2 = 0, score3 = 0;
    // score1= anagram();
    // score2= caesar();
    score3 = word_guess();
    score = score_count(score1, score2, score3);
    printf("Game Over!\nYour total score: %d points", score);
    return 0;
}