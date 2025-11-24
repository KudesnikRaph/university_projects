#include <stdio.h>

main() {
  char c;

  printf("Введите любой символ\n");
  scanf("%c", &c);
  printf("Численное значение символа %d \n", int(c));
  
  return 0;
}
