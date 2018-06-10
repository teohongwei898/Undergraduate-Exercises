#include <stdio.h>

int mystrcpy (char s[], char t[]);

int main (void)

{
    char s[] = "Erm...!", t[] = "Hello! World! Hi!";

    mystrcpy (s, t);

    printf("String s = %s \nString t = %s", s, t);

    return 0;
}

int mystrcpy (char s[], char t[])

{
    int i = 0;

    while ((s[i] = t[i]) != '\0')

        i++;

    return i;
}
