#include <stdio.h>

int main()
{
    char string[] = "A string."; // initialising char array with "A string."
    char *pchar = string;
    printf("%c %c %c\n", string[0], *pchar, pchar[3]);
    // printing in one line the letter on index 0, the pointer position and letter t.
    pchar += 2; // updating the pointer by pointer+2
    printf("%c %c %c", *pchar, pchar[2], pchar[5]);
    // printing the pointer, the letter r and g.
    return 0;
}