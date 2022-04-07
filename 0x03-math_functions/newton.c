#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "newton.h"
#define alloc(t) (t *)malloc(sizeof(t))
/*
 Defining equation to be solved.
 Change this equation to solve another problem.
*/
#define f(x) x *x - 2 /* f(x) */
#define df(x) 2 * x   /* f'(x) */

/* Add element to the beginning of the list */
t_cell *InitCell(double elt, t_cell *next)
{
    t_cell *cell = alloc(t_cell);
    cell->elt = elt;
    cell->next = next;
    return cell;
}

/* Newton function */
t_cell *newton(double a)
{
    double r, b, f, df;
    t_cell *head = NULL;
    do
    {
        f = f(a);
        df = df(a);
        if (df == 0.0)
        {
            return NULL;
        }
        r = f / df;
        b = a - r;
        head = InitCell(b, head);
        a = b;

    } while (fabs(r) >= pow(10, -4));
    return head;
}

