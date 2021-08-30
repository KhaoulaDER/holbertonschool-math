#include "holberton.h"
#include <stdio.h>
complex conjugate(complex c){
    c.im=-c.im;
    return c;
}
