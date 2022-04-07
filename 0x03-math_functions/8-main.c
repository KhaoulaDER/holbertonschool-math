#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "error_function.h"

int main()
{
    FILE *error = NULL;
    double n=pow(10,-17);
    Error(error, n);
    return 0;
}
