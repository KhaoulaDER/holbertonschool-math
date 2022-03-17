#include <stdio.h>
#include "euler.h"

int main()
{
    FILE *euler = NULL;
    Euler(euler, "euler1.txt", -2, 2, 0.5, 10000);
    Euler(euler, "euler2.txt", 2, -2, -0.5, 1000);
        return (0);
}
