/* #include "rectangle.h" */
#include <stdio.h>
#include <math.h>

/**
 * rectangle_method - calculates integral by rectangle method
 * @a: inferior limit
 * @b: superior limit
 * @steps: number of rectangles
 *
 * Return: the value of the integral
 */


double rectangle_method(double a, double b, int steps)
{
	double sum = 0;
	double h;
	int i;

	h = (b - a) / steps;
	for (i = 0; i < steps; i++)
		sum += h * (1 / (1 + pow((a + i * h), 2)));
	return (sum);
}
