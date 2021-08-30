#include "holberton.h"
#include <stdio.h>

void display_complex_number(complex c)
{
    if (c.im == -1)
    {
        printf("%g - i\n", c.re);
    }
    else if (c.im < 0)
    {
        printf("%g - %gi\n", c.re, -c.im);
    }
    else if (c.im == 0)
    {
        printf("%g\n", c.re);
    }
    else if (c.im == 1)
    {
    printf("%g + i\n", c.re);
    }
    
    else
    {
        printf("%g + %gi\n", c.re, c.im);
    }
}