fellas, i realised that the ``` & ``` symbol in the code is meant to:
pass the memory address of the input variable to the scanf function, 
without it your code will always show the else condition, cuz symply 
it cant fetch the value because there's no ```&```
also that's the code of the stuff i'm talking bout (in case i updated the final code):
``
#include <stdio.h>
int main(){
  char input;
  printf("do you agree to the terms and conditions?(y/n): ");
  scanf(" %c", &input);
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
``

fellas, to include methodes u have to declare them or perhaps import them from the library
i wanted to add the "to lower case" methode so that i dont write more cases, pretty obvious ain't it
the way i did it is this:
added a ``` #include <ctype.h> ```
then made the input ### after it was read ### into lowercase with:
``` input = tolower((unasigned char)input); ```
god bless, the current code is:
``
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
``