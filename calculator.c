#include <stdio.h>
int main(void){
    char operator [1];
    printf("what kinda operator do ya wanna use? (+,-,*,/): ");
    scanf("%c", operator);
    int x;
    int y;
    printf("what's your first number?: ");
    scanf("%i", &x);
    printf("what's your second number?: ");
    scanf("%i", &y);
    if (operator == "+") {
        int some = x + y;
        printf("the some is: %i", some);
    }
    else if (operator == "-") {
        int subs = x - y;
        printf("the result is: %i", subs);
    }
    else if (operator == "*") {
        int mult = x * y;
        printf("the result is: %i", mult);
    }
    else if (operator == "/") {
        int dev = x / y;
        if (y != 0) {
            printf("the result is: %i", dev);
        }
        else {
            printf("you can't devide by 0");
        }
    }
    else {
        printf("unvalid operation");
    }

}