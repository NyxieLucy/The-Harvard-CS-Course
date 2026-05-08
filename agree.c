#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
int main(){
    char input;
    printf("do you agree to the terms and conditions?(y/n): ");
    scanf(" %c", &input);
    input = tolower((unsigned char)input);
    if (input == 'y') {
        printf("user agreed to the terms and agreements!");
    }
    else if (input == 'n'){
        printf("user refused the terms and agreements...");
    }
    else {
        printf("unvalid input!");
    }

    
}