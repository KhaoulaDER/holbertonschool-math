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
    float u0 = 0, u1 = 2;
    t_cell *head = NULL;
    head = dichotomy(u0, u1);
    if (head == NULL)
        printf("Incorrect Initial values of u0 and u1!\n");
    else
    {
        printf("\nthe values of f(x) in middle point of each interval until the convergence are:\n");

        print_list(head);

        printf("\nthe number of iterations until having the convergence with error less than 10^(-10) is:  %d \n", listLength(head));
    }
    return 0;
}