#include <stdio.h>

main() {
  char char_e = 'E';
  char char_a = 'A'; 
  while(char_e >= 'A') {
    printf("\n%c", char_e);
    char_e--;
}

  while(char_a <= 'E') {
    printf("\n  %c", char_a);
    char_a++;
  }
  
  printf("\n");
  return 0;
}
