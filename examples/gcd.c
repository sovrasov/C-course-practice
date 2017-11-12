#include <stdio.h>

int fingGCD(int a, int b); // it's just a prototype

void main()
{
  int a, b, gcd;
  printf("Enter two integer numbers: ");
  scanf("%i%i", &a, &b);
  gcd = fingGCD(a, b);
  printf("GCD of %i and %i is %i\n", a, b, gcd);
}

int fingGCD(int a, int b)
{
  while( a != 0 && b !=0 )
  {
    if(b >= a)
      b = b % a;
    else
      a = a % b;
  }

  return a + b;
}
