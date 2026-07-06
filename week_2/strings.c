#include <stdio.h>
#include <string.h>
int main(void) {
    //strings are arrays of characters i see
    // the \0 is the null terminator that marks the end of a string
    char food[] = "hamburgers";
    int c = 0;
    while (food[c] != '\0') {
        printf("%c\n", food[c]);
        c++;
    }
}