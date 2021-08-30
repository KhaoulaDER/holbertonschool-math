#include "holberton.h"
#include <stdio.h>
#include <math.h>
double modulus(complex c){
    return(sqrt(c.re * c.re + c.im * c.im));
}