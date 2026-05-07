#include <stdio.h>
int main(void){
    int age;
    printf(" how old are you?!: ");
    scanf("%i", &age);
    printf("you're %i year old \n",age);
    if (age < 0) {
        printf("unvalid expression lil bro");
    }
    else if (age < 18) {
        printf("you are a minor");
    }

    else if (age >= 18) {
        printf("you are an adult");
    }
    else {
        printf("subhana allah an alient");
    }
    
}