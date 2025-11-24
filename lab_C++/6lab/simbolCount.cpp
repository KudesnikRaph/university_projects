#include <stdio.h>

main() {
  char c;

  printf("Введите любой символ\n");
  scanf("%c", &c);
  printf("Численное значение символа %d \n", int(c));
  printf("Численное значение следующего символа %c = %d \n", c+1, int(c+1));
  
  return 0;
}
