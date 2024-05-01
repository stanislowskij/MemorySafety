#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // strcpy method:
    // strcpy(char *dst, char *src)
    //      *dst is the destination string (where we will copy to)
    //      *src is the original string (where we will copy from)
    // strcpy will continue reading from src until it finds the NUL ('\0') character
    // What if the string doesn't have a \0 character?

    char *other = "What's up?";
    char *src = malloc(5 * sizeof(char));
    src[0] = 'H';
    src[1] = 'e';
    src[2] = 'l';
    src[3] = 'l';
    src[4] = 'o';

    char dst[1]; // Too small
    strcpy(dst, src);
    // Further work on this could allow for a buffer overflow attack

    printf("%s \n", dst);
}
