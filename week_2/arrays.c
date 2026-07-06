#include <stdio.h>
int main(void) {
    int baghrir = printf("Enter the number of modules: ");
    scanf("%i", &baghrir);
    
    int score_array[baghrir];
    for (int i = 0; i < baghrir; i++) {
        // dam arrays 
        score_array[i] = printf("Enter score for module %i: ", i + 1);
        scanf("%i", &score_array[i]);
    }
    int total = 0;
    for (int i = 0; i < baghrir; i++) {
        total += score_array[i];
    }
    printf("total score is %i\n", total);
    float average = (float)total / baghrir;
    printf("average score is %.2f\n", average);
    return 0;
}