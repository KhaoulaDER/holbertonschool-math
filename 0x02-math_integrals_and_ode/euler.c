#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void Euler(FILE *euler, char *name,double x0, double y0, double T, int n)
{
    double h, diff1, diff2;
    int i;
    h =  2 * T / n;
    euler = fopen(name, "w+");
    for (i = 0; i < n; i++)
    {
        diff1 = y0;
        diff2 = -sin(x0);
        fprintf(euler, "%f\t%f\n", x0, y0);
        y0 = y0 + h * diff2;
        x0 = x0 + h * diff1;
    }
    fclose(euler);
}

