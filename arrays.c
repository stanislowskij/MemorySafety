#include <stdlib.h>
#include <stdio.h>

#define ARRAY_SIZE 5

void print_array(int *values) {
  for(int i = 0; i < ARRAY_SIZE; i++) {
    printf("%d", values[i]);
  }
  printf("\n");
}

int main() {
  int xs[ARRAY_SIZE];
  int ys[ARRAY_SIZE];
  // Pointers and arrays share many properties in C.
  // An array "points to" the address of its first element.
  for(int j = 0; j < ARRAY_SIZE; j++) {
    // C does not check bounds on arrays. You are free to access memory outside of the
    // allocated array space. This produces undefined behavior (UB)
    xs[j] = j; // xs will contain {0, 1, 2, 3, 4}
    ys[j] = j + 5; // ys will contain {5, 6, 7, 8, 9}
  }
  for(int i = 0; i < 10; i++) {
    xs[i] = xs[i] + 1; // Weird stuff starts happening when i > 4
  }
  print_array(xs); // Prints {1, 2, 3, 4, 5} as expected
  print_array(ys); // Here's the issue
  printf("\n");

  // Many functions provided in the C standard library also have little to no
  // error checking, and are completely unsafe to use!!!

  // Buffer overflow, heart bleed, etc.
}
