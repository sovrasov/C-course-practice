#include <stdio.h>

float sumGeometricProgression(float q, int n)
{
  float sum, x;
  sum = 1;
  x = q;
  for(int i = 1; i < n; i++)
  {
    sum += x;
    x = x*q;//q^(i+1)
  }
  return sum;
}

void main()
{
  float q, sum;
  int n;

  printf("Enter the scale factor and number of elements:");
  scanf("%f%i", &q, &n);

  sum = sumGeometricProgression(q, n);
  printf("Sum of the first %i elements of the geometric progression"
   "with the scale factor %f is %f\n", n, q, sum);
}
