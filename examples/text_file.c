#include <stdio.h>

void main()
{
  const char tstFileName[] = "test_file.txt";
  char buf[128];
  FILE * pFile;
  pFile = fopen (tstFileName, "w");

  if(pFile == NULL)
  {
    printf("Can't create file %s\n", tstFileName);
    return;
  }

  fprintf(pFile, "Hello world!\n");
  fclose(pFile);

  pFile = fopen (tstFileName, "r");
  if(pFile == NULL)
  {
    printf("Can't open file %s\n", tstFileName);
    return;
  }

  fgets(buf, sizeof(buf), pFile);
  fclose(pFile);
  remove(tstFileName);

  printf("Line form file: %s\n", buf);
}
