#include <stdio.h>
#include <iostream>

main() {
  float a, b, max;

  printf("Напишите дробные числа, которые разные по величине\n");
  printf("1. ");
  scanf("%f", &a);
  printf("2. ");
  scanf("%f", &b);

  max = (a > b) ? a : b;
  printf("Наибольшим оказалось - %g\n", max);
  // if(a > b) {
  //   printf("Наибольшим оказалось - %g \n", a);
  // } else {
  //   printf("Наибольшим оказалось - %g \n", b);
  // }
  
  printf("\n");
  return 0;
}

