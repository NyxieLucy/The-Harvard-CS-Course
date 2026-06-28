### compiling stuff
if ya wannt to compile a c file into le you use :
```clang -o name-of-file name-of-file.c```

but i'm using nixOS so it'll be :
``` gcc -o name-of-file name-of-file.c ```

### stuff for the functions
apparently we must declare the functions at the top with a semi column to tell the program
"hey there is no function yet but i promise you there would be later"
## example:
```
#include <stdio.h>

void fox(void);

int main(void) {
  printf("Hello, World!\n");
  fox();
  return 0;
}

void fox(void) {
  printf("mama fwego blup blup\n");
}
```