#ifndef HOLBERTON_H_
#define HOLBERTON_H_

typedef struct
{
    double re;
    double im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
#endif 