#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "dichotomy.h"
#define alloc(t) (t *)malloc(sizeof(t))
/*
 Defining equation to be solved.
 Change this equation to solve another problem.
*/
#define f(x) x *x - 2

/* Add element to the beginning of the list */
t_cell *InitCell(double elt, t_cell *next)
{
    t_cell *cell = alloc(t_cell);
    cell->elt = elt;
    cell->next = next;
    return cell;
}



t_cell *dichotomy(double a, double b)
/* this function return the linked list contains the values of c (the middle point) until the convergence with error less than 10^(-10) */
{
    double c, f0, f1, fc;
    t_cell *head = NULL;
    /* Calculating Functional Value */
    f0 = f(a);
    f1 = f(b);
    /* Checking whether given values contains the root or not. */
    if (f0 * f1 > 0.0)
    {
        return NULL;
    }
    else
    {
        /* Implementing Bisection Method */
        do
        {
            c = (a + b) / 2;
            fc = f(c);
            head = InitCell(c, head);
            if (f0 * fc < 0)
            {
                b = c;
                f1 = fc;
            }
            else
            {
                a = c;
                f0 = fc;
            }

        } while (fabs(fc) >= pow(10, -10));
        return head;
    }
}
