#include <stdio.h>

main() {
  const char *hw = "Hello World";
  int x;

  do {
    printf("Введите число:\n");
    scanf("%d", &x);
    if(x < 5) {
      printf("Мало, нужно число 5 или больше!\n");
    }
  } while (x < 5);
  
  printf("%s\n", hw);

  printf("\n");
  return 0;
}
