#include <stdio.h>

int main() {
    printf("bool:\t\t%d bytes\n", (int)sizeof(bool));
    printf("char:\t\t%d bytes\n", (int)sizeof(char));
    printf("short:\t\t%d bytes\n", (int)sizeof(short));
    printf("int:\t\t%d bytes\n", (int)sizeof(int));
    printf("long:\t\t%d bytes\n", (int)sizeof(long));
    printf("float:\t\t%d bytes\n", (int)sizeof(float));
    printf("double:\t\t%d bytes\n", (int)sizeof(double));
}
