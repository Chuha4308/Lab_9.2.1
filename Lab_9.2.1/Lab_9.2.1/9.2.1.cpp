//main.cpp
#include <stdio.h>
#include "var.h"

#define Z 2
#define SQR(x) (x) * (x)
#define CUBE(x) ((x) * (x) * (x)) 
#define MAX(y,z) ((y) > (z)) ? (y) : (z)
#define MIN(y,z) ((y) < (z)) ? (y) : (z)


#define PRINTI(w) puts("control output"); \
        printf (#w"= %f\n",(float)w)

int main()
{
    puts("Lab 9.2.1. Using macros and preprocessing directive");

    PRINTI(Z);

#if Z > 5
    puts("define maximum of two numbers");
    puts("Input 2 integer numbers");
    scanf_s("%d", &x);
    PRINTI(x);
    scanf_s("%d", &y);
    PRINTI(y);
    w = SQR(MIN(x * CUBE(y), x + z)); ;
#else
    {
        puts("define maximum of two numbers");
        puts("Input 2 integer numbers");
        scanf_s("%d", &x);
        PRINTI(x);
        scanf_s("%d", &y);
        PRINTI(y);
        w = MAX(x - y * z, x * y + z);;
    }
#endif

    printf("%d\n", w);
}


   