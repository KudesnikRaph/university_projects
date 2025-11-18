#include <stdio.h>

void swap(int,int);

main() {
  int x,y;
  printf("Введите 2 целых числа:\n");
  scanf("%d,%d", &x, &y);
  swap(x,y);
  printf("Первое - %d, второе - %d", x, y);
}

void swap(int a, int b) {
  int tmp = a;
  a=b;
  b=tmp;
}
