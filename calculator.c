#include <stdio.h>
int main(void){
    char operator;

    int x;
    int y;
    printf("what's your first number?: ");
    scanf("%i", &x);
    printf("what kinda operator do ya wanna use? (+,-,*,/): ");
    scanf(" %c", &operator);
    printf("what's your second number?: ");
    scanf("%i", &y);
    if (operator == '+') {
        printf("the some is: %i", x+y);
    }
    else if (operator == '-') {
        printf("the result is: %i", x-y);
    }
    else if (operator == '*') {
        printf("the result is: %i", x*y);
    }
    else if (operator == '/') {
        if (y != 0) {
            printf("the result is: %i", x/y);
        }
        else {
            printf("you can't devide by 0");
        }
    }
}
