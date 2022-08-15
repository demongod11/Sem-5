// Simple inline assembly example //
#include <stdio.h>

int main(int argc, char **argv)
{
    int x = 1;
    printf("Hello x = %d\n", x);
    
    // in-line assembly to increment the x by 1
    __asm__(
        "incl %0 \n"
        : "=r" (x) // Output registers
        : "0" (x) // Input registers
    );

    printf("Hello x = %d after increment\n", x);
    if (x == 2)
    {
        printf("OK\n");
    }
    else
    {
        printf("ERROR\n");
    }
}