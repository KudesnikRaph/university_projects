#include <stdio.h>

main() {
  int i = 14, j = 2;
  printf("\n i++ = %d", i++);
  printf("\n ++i = %d", ++i);
  printf("\n --j = %d",--j);
  printf("\n i+ = 4 = %d", i+=4);
  printf("\n j* = 5 %d", j*=5);
  printf("\n i/j = j = %d", i/=j);
  printf("\n i%% = 3 = %d", i%=3);
  i=1;
  printf("\n i<<1 = %d, i<<2 = %d", i<<1,i<<2);
  printf("\n i>>3 = %d", i>>3);
  float f = 15.45;
  printf("\n i = %d", i = f);

  return 0;
}
