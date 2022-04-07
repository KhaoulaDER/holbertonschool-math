/* Derivation */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
 Defining equation to be solved.
 Change this equation to solve another problem.
*/
#define f(x) 1 / (1 + x) /* f(x) = 1/(1+x)  */


/* Plot the error function |S(h)−f′(0)|  */
void Error(FILE *name, double n)
{
    double h=0.1;
    name = fopen("Error_Function", "w");    
    while ( h>n )
    {
        fprintf(name, "%f\t%f\n", log10(h), log10(fabs(((f(h) - f(0))/h + 1))));
        h *= 0.1;
    }
    fclose(name);
    system("gnuplot -p -e \" set terminal png ; set output 'error_function.png'; plot  'Error_Function' w l \"");
}

