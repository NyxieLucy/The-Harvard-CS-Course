#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  // If the user didn't pass any text, give a default fallback message
  if (argc < 2) {
    printf("Usage: %s <message>\n", argv[0]);
    return 1;
  }

  // 1. Print the speech bubble with the custom argument message
  printf("\n  +");
  for (int i = 0; i < strlen(argv[1]) + 2; i++)
    printf("-");
  printf("+\n");

  printf("  | %s |\n", argv[1]);

  printf("  +");
  for (int i = 0; i < strlen(argv[1]) + 2; i++)
    printf("-");
  printf("+\n");

  // 2. Print the majestic custom ASCII cat art with escaped backslashes
  printf("   \\   /\\_____/\\ \n");
  printf("    \\ /  o   o  \\ \n");
  printf("     ( ==  ^  == ) \n");
  printf("      )         ( \n");
  printf("     (           ) \n");
  printf("    ( (  )   (  ) ) \n");
  printf("   (__(__)___(__)__)\n\n");

  return 0;
}
