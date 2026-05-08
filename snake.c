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