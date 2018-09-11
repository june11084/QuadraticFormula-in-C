/******************************************************************************

CS 153 PROGRAM ASSIGNMENT #1

Quadratic Formula
 
Jun Li

9/9/2018

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
  double a, b, c, x1, x2;
  double discriminant;
    
  /* Get coefficients */
  printf("\nEnter a b c: ");
  scanf(" %lf %lf %lf", &a, &b, &c);

  if (a == 0.0 && b != 0.0)
  {
    x1 = -c/b;  
    printf("Linear solution: %lf\n", x1);
  }
  else if (a == 0.0 && b == 0.0)
  {
    printf("a and b must not both be zero\n"); 
  }
  else
  {
    discriminant = b * b - 4.0*a*c;

	if (discriminant < 0.0)
	{
	  printf("No real roots\n");
	}
	else if (discriminant == 0.0)
	{
	  x1 = -b / (2 * a);
	  printf("One real root: %lf\n", x1);
	}
	else
	{
      x1 = (-b + sqrt(discriminant)) / (2.0*a);
	  x2 = (-b - sqrt(discriminant)) / (2.0*a);
	  printf("Two real roots: x = %lf and x = %lf\n", x1, x2);
	}
  }

}