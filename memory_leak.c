#include <stdio.h>
#include <stdlib.h>

void do_stuff() {
    // Memory is allocated inside this function, never to be seen again.
    // Arrays "a" and "b" only exist within the scope of this function.
    // This function never frees the heap memory, so we can't get it back...
    int *a = malloc(10 * sizeof(int));
    int *b = malloc(50 * sizeof(int));
}

int main() {
    do_stuff();
    return(EXIT_SUCCESS);
    // if installed: 
    // gcc -o out memory_leak.c
    // valgrind --leak-check=full ./out
}