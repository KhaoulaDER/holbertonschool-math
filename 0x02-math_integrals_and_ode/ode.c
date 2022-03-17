#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "euler.h"
#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif
/* The main contains the generation of the name of .txt file and the plot of multiple files */
int main()
{
    double value =  2 * M_PI, val = value, val1 = value, k = -2.0, k1 = -0.5, k2 = 2.0;

    int v = 1, i;
    for (i = 1; i <= 32 ; i++)
    {
        char number[12];
        FILE *euler = NULL;
        sprintf(number, "%d", i);
        strcat(number, ".txt");
        char nameFile[] ="Euler\0";
        strcat(nameFile, number);
        if (i % 8 != 1 && i % 8 != 2 && i % 8 != 3)
        {
            if (i <= 16)
            {
                Euler(euler, nameFile, 0.0, k, val, 1000);
                k = k - 0.25;
                if ((i >= 8))
                    val = -value;
                if (i == 8)
                    k = -2;
            }
            if (i >= 20)
            {
                Euler(euler, nameFile, 0.0, k2, -val, 1000);
                k2 = k2 + 0.25;
                if (i >= 24)
                    val = value;
                if (i == 24 || i == 32 || i == 40)
                    k2 = 2;
            }
        }
        if ((i % 8 == 1 || i % 8 == 2 || i % 8 == 3))
        {
            Euler(euler, nameFile, val1, k1, value, 10000);
            k1 = k1 - 0.5;
            v++;
            if (v > 3)
            {
                v = 1;
                k1 = -0.5;
                val1 -= 2 * M_PI;
            }
        }
    }
    /* plot multiple file in the same graph at a specific interval of x */
    system("gnuplot -p -e \" set terminal png ; set output 'ode.png'; plot [-10:10] for[i = 1:32] 'Euler'.i.'.txt'  w l title '' \"");
    return 0;
}
