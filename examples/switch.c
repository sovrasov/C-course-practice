#include <stdio.h>
int main()
{
  char c;
  scanf("%c", &c);
  switch(c)
  {
    case 'c':
      printf("key c was pressed\n");
      break;
    case 'q':
      printf("key q was pressed\n");
      break;
    default:
      printf("some other key was pressed\n");
  }

  return 0;
}
