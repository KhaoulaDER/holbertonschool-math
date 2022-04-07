#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

typedef struct sCell
{
    double elt;
    struct sCell *next;
} t_cell;

t_cell *InitCell(double elt, t_cell *next);
t_cell *dichotomy(double a, double b);


#endif 