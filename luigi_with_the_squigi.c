#include <stdio.h>
int rows(void);
int columns(void);
int main(){
    int rows_ques = rows();
    int columns_ques = columns();
    printf("%i", rows_ques);
    printf("%i", columns_ques);
    for (int i = 0; i < rows_ques; i++) {
        for (int j = 0; j < columns_ques; j++) {
            printf("[]");

        }
        printf("\n");

    }
}

int rows(void){
    int row;
    printf("how many blocks in rows: \n");
    scanf("%i",&row);
    return row;
}
int columns(void){
    int column;
    printf("how many blocks in columns: \n");
    scanf("%i",&column);
    return column;
}