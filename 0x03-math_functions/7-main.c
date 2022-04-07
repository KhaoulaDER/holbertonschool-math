#include <stdio.h>
#include "dichotomy.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_list(t_cell *head)
{
    if (head == NULL)
       return;
    print_list(head->next);
    printf(" x = %0.10f \n",head->elt);
}

/* Function to return the length of the linked list */
int listLength(t_cell *head)
{
    t_cell *cur = head;
    int size = 0;
    while (cur != NULL)
    {
        ++size;
        cur = cur->next;
    }
    return size;
}


int main()
{
    int maxmitr = 1000;
    double u0 = 1;
    t_cell *head = NULL;
    head = newton(u0);
    if (head == NULL)
        printf("Mathematical error because  f'(u0)=0 \n");
    else if (listLength(head) > maxmitr)
        printf("Not convergent");
    else
    {
        printf("\nthe values of x until the convergence with error less than 10^(-10) are:\n");
        print_list(head);
        printf("\nthe number of iterations until having the convergence with error less than 10^(-10) is:  %d \n", listLength(head));
    }
    return 0;
}