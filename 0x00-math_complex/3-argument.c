#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "holberton.h"
double argument(complex c){
    double a;
    if (c.re == 0 && c.im == 0)
    {
        a = 0;
    }
    else if (c.re != 0)
    {
        if ((c.re < 0) && (c.im < 0))
        {
            a = atan(c.im / c.re) - M_PI ;
        }
        else if ((c.re < 0) && (c.im > 0))
        {
            a = atan(c.im / c.re) + M_PI;
        }
        else
        {
            a = atan(c.im / c.re);
        }
    }
    else
    {
        if (c.im < 0)
        {
            a = -M_PI / 2;
        }
        else
        {
            a = M_PI / 2;
        }
    }
    return a;
}
