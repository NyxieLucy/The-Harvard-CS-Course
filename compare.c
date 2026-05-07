#include <stdio.h>
int main(void){
    int x;
    int y;
    printf("please enter your first number: ");
    scanf("%i", &x);

    printf("please enter your second number: ");
    scanf("%i", &y);


    if (x < y) {
        printf("your first number is smaller than the second!\n");
    }
    else if (x == y) {
        printf("the numbers are equal\n");

    }
    else {
        printf("the first number is bigger than the second\n");
    }
}
