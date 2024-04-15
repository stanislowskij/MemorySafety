#include <stdlib.h>
#include <stdio.h>

#define ARRAY_SIZE 6

void print_array(int *values) {
  for (int i=0; i<ARRAY_SIZE; ++i) {
    printf("%d", values[i]);
  }
}

int main() {
  for (int i=0; i<10; ++i) {
    int *xs = NULL;
    int *ys = NULL;
    xs = malloc(6 * sizeof(int));
    ys = malloc(6 * sizeof(int));
    for (int j=0; j<ARRAY_SIZE; ++j) {
      xs[j] = j;
      ys[j] = j;
    }
    print_array(xs);
    print_array(ys);
    printf("\n");
    free(xs);
    free(ys);
  }
}
