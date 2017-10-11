#include <stdio.h>
void main()
{
  int number, sum;
  sum = 0;
  number = 0;

  do {
    number += 2;
    sum += number;
  } while(number < 100);

  printf("Sum of the even numbers which "
    "are not greater than 100 is %i\n", sum);

  sum = 0;
  number = 0;
  while(number < 100)
  {
    number += 2;
    sum = sum + number;
  }
  printf("Sum of the even numbers which "
    "are not greater than 100 is %i\n", sum);

  sum = 0;
  for(number = 2; number <= 100; number += 2)
  {
    sum = sum + number;
  }
  printf("Sum of the even numbers which "
    "are not greater than 100 is %i\n", sum);
}
