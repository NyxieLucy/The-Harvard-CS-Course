i see the output of the first print, but the second comes in with the compairing result.
also, the conditions are reversed for some reason
----------------------------------------------------------------------
## the example code:
#include <stdio.h>
int main(void){
    int x;
    int y;
    printf("please enter your first number: ");
    printf("please enter your second number: ");

    scanf("%i\n %i", &x, &y); //apparently i got a segmentation fault cuz i wrote "%i " instead of "%i"

    if (x < y) {
        printf("your first number is bigger than the second!");
    }
    else if (x == y) {
        printf("the numbers are equal");
        
    }
    else {
        printf("the first number is smaller than the second");
    }
}
----------------------------------------------------------------------
my bad y'all i didn't compile it lmaooooooo (there goes 15mins)