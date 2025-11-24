#include <stdio.h>

main() {
  int a, b;

  printf("Введите положительное число:\n");
  scanf("%d", &a);
  printf("Введите отрицательное число:\n");
  scanf("%d", &b);
  if(a <= 0 || b >= 0 || a != -b) {
    printf("Ошибка, числа должны быть положительными\n");
    return 1;
  }
  printf("Для положительного числа: %d \n", a);
  printf("Восьмиричный: %o \n", a);
  printf("Шестнадцатиричный: %X \n", a);

  printf("Для отрицательного числа: %d\n", b);
  for(int i=31; i >= 0; i--) {
    printf("%d", (b >> i) & 1);
  }
  printf("\n");
  
  return 0;
}
