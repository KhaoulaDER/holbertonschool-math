#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  double theta;
  FILE *fp4 = NULL;
  
  fp4 = fopen("cosh.txt", "w");
 
  
  for (theta = -10; theta <= 10; theta = theta + 0.01)
  
    fprintf(fp4, "%lf\t%lf\n", theta, cosh(theta));
   
  
  system("gnuplot -p -e \" set terminal png ; set output 'cosh.png'; plot 'cosh.txt' w l \"");
  
}
