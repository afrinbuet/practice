#include <stdio.h>
int main() {
    char a1[100], a2[100], a3[100];
    scanf("%[^\n]", a1); getchar(); // Read first string, consume newline
    scanf("%[^\n]", a2); getchar(); // Read second string, consume newline
    scanf("%[^\n]", a3);            // Read third string (no trailing newline to consume)
    printf("%s\n%s\n%s", a1, a2, a3);
    return 0;
}
