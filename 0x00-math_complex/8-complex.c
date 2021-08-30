#include <stdio.h>
#include "holberton.h"
#include <math.h>
void complex_from_mod_arg (double m, double arg, complex *c3)
{
    c3->re = m * cos(arg);
    c3->im = m * sin(arg);
}