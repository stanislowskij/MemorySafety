#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    // What happens when two variables take the same heap allocation,
    // and we try to free one?
    char *s = malloc(5 * sizeof(char));
    strcat(s, "Hello");
    char *t = s;
    
    printf("s: %s, t: %s \n", s, t);
    // s: Hello, t: Hello

    free(s); // Removes the allocation of s from memory. 
             // What happens to t?
    printf("t: %s \n", t); // t: Hello
    free(t); // Everything crashes and burns...

    // In practice, double-freeing a block of memory will 
    // cause corruptions, which might 
    // make existing memory corrupted or 
    // cause future allocations to fail.
}