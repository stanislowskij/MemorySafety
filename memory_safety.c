#include <stdio.h>
#include <stdlib.h>

int main() {
  for (int i=0; i<10; ++i) {
    char *h = NULL;
    char *w = NULL;
    h = malloc(6 * sizeof(char));
    w = malloc(8 * sizeof(char));
    h[0] = 'H';
    h[1] = 'e';
    h[2] = 'l';
    h[3] = 'l';
    h[4] = 'o';
    h[5] = '\0';
    w[0] = ' ';
    w[1] = 'w';
    w[2] = 'o';
    w[3] = 'r';
    w[4] = 'l';
    w[5] = 'd';
    w[6] = '!';
    w[7] = '\0';
    printf("%s%s\n", h, w);
    free(h);
    free(w);
  }
}
