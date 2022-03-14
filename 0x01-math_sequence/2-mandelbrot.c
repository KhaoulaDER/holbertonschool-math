#include <stdio.h>
#include "holberton.h"
int main()
{
	int iX, iY;
	const int iXmax = 1000;
	const int iYmax = 1000;
	double Cx, Cy;
	complex c, z;
	int Iteration;
	const int IterationMax = 255;
	FILE *mandelbrot;
	/*create new file,give it a name and open it in binary mode  */
	mandelbrot = fopen("mandelbrot.pgm", "wb");	  //write the file in binary mode
	fprintf(mandelbrot, "P2\n");				  // Writing Magic Number to the File
	fprintf(mandelbrot, "%d %d\n", iXmax, iYmax); // Writing Width and Height into the file
	fprintf(mandelbrot, "255\n");				  // Writing the maximum gray value

	for (iY = 0; iY < iYmax; iY++)
	{
		for (iX = 0; iX < iXmax; iX++)
		{
			complex c1,c2;
			c.re = (iX - iXmax / 2) * 4.0 / iXmax;
			c.im = (iY - iYmax / 2) * 4.0 / iXmax;
			z.re = 0;
			z.im = 0;
			Iteration = 0;
			while (((modulus(z)) <= 2) && Iteration < IterationMax)
			{
				multiplication(z, z, &c1);
				addition(c1, c, &z);
				Iteration++;
			}
			fprintf(mandelbrot, "%d ", Iteration); //Copy gray value to file
		}
		fprintf(mandelbrot, "\n");
	}
	fclose(mandelbrot);
	return 0;
}
