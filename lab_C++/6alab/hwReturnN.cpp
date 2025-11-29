#include <stdio.h>

main() {
  const char *hw = "Hello World";
  int x;
    
  printf("Введите положительное число число:\n");
  scanf("%d", &x); 
  
  int i = 0;
  while (i < x) {
    int j = 0;
    while (j < i) {
      printf(" ");
      j++;
    }
    printf("%s\n", hw);
    i++;
  }

  printf("\n");
  return 0;
}
