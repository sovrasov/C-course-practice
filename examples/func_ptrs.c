#include <stdio.h>

void print_msg(const char* msg)
{
  printf("%s\n", msg);
}

void print_msg_stub(const char* msg)
{
}

int is_prime(int p, void (*print_func)(const char*))
{
  int i;
  if(p <= 0)
  {
    print_func("Error, the number is negative");
    return -1;
  }
  else
  {
    for(i = 2; i < p; i++)
      if(p % i == 0)
      {
        print_func("The number is not prime");
        return 0;
      }
    print_func("The number is prime");
    return 1;
  }
}

int main()
{
  int number, prime_flag;

  printf("Enter a positive integer number: ");
  scanf("%i", &number);

  //print information to console using print_msg
  prime_flag = is_prime(number, print_msg);

  //silent call
  prime_flag = is_prime(number, print_msg_stub);

  return 0;
}