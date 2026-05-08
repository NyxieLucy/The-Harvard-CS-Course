here we see loops and stuff, it's lwk easy and coprehendable, so i'll just include what i tried so far:

### loops first type:
``
#include <stdio.h>
int main(){
    int i = 0;
    while (i < 5) {
    printf("snake goes: hiss hiss hiiiisssss\n");
    i++;
    }
}
``
### loops second type using ```for```
``
#include <stdio.h>
int main(){
    for (int i = 0; i < 5; i++) {
        printf(" snake says: hiisssssssssss\n");
    }
}
``
### and finaly the third type: a forever loop with bools
``
#include <stdbool.h>
#include <stdio.h>
int main(){
    while (true) {
        printf("hisss hiissss");
    }
}
``
apparently each component or element has it's own labrary, holy language

### making it more dynamic:  
``
#include <stdio.h>
int main(){
    int question;
    printf("how many times ya wanna see the snake hisses?: ");
    scanf("%i", &question);
    for (int i = 1; i <= question; i++) {
        printf("hissing %i time/s\n", i);
    }
}
``
### holy beans this one's crazy, highlighted "what if the user input wasn't a number:
``
#include <stdio.h>
int main(){
    int question;
    int status;
    while (1) {
        printf("how many times do ya want to see the snake hiss: ");
        status = scanf("%i", &question);
        if (status == 1) {
            for (int i = 1; i <= question; i++) {
                printf("hissing %i time(s)\n", i);
            }
            break;
        }
        else if (status == 0) {
            printf("this ain't a numba man... try again!, ");
            int c;
            while ((c = getchar()) != '\n' && c != EOF){
            }
        }
    }
}
``
a lotta logic:
1. apparently we can use 1 and 0 to say true and false respectively without the need for a `#include`
2. we can stock data in seperate variable so we can use it seperately like i did in `status = scanf("%i", question);` think of it this way... `scanf` stores a value, we stored it in `status`, `question` IS the value... i suppose that's how i understand it...
3. now at the end, if the status was false, it prints and declares a new varuable 'c', then creates a new loop that gets characters with `getchar()` (the characters in the input), then goes one by one and clear them until it hits the new line and the end of input (EOF)

#### guess that covers it all 
fellas i was wrong, there's an operator called `continue` for loops to well... continue, and my dumbass overcomplicated it, same logic but this one's easier

### there's also the:
`do {idk anything basically} while (a condition is true or false or any condition)`

### fellas we moved to functions
basically what u do make a function is use the void, the void means it takes not input ,
example 
`
#include <stdio.h>
void hiss(){
    printf("hiissiiiiiing\n");
}
int main(){
    int question;
    int status;
    while (1) {
        printf("how many times do ya want to see the snake hiss: ");
        status = scanf("%i", &question);
        if (status == 1) {
            for (int i = 1; i <= question; i++) {
                hiss();
            }
            break;
        }
        else if (status == 0) {
            printf("this ain't a numba man... try again!, ");
            int c;
            while ((c = getchar()) != '\n' && c != EOF){
            }
        }
    }
}
`