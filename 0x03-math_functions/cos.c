#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  double theta;
  FILE *fp1 = NULL;
  fp1 = fopen("cos.txt", "w");
  for (theta = 0; theta <= 6 * M_PI; theta = theta + 0.01) 
  fprintf(fp1, "%lf\t%lf\n", theta, cos(theta));
  system("gnuplot -p -e \" set terminal png ; set output 'cos.png'; plot 'cos.txt' w l \"");
}
