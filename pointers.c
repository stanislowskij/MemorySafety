#include <stdlib.h>
#include <stdio.h>

int main() {
    int i = 8; // Integer containing the value 8
    int *ip = &i; // Pointer containing the address of the integer i

    printf("%d \n", *ip); // Dereference ip to get the value stored at that location. In this case, 8

    // We can just make pointers any value..? Why would you want to do this?
    int *rp = 150; // Compiler warns you
    // printf("%d", *ir); // Segmentation fault; illegal memory access

    int *np = 0; // Null pointer, can also be denoted with NULL

    return(EXIT_SUCCESS);
}