#include <stdio.h>

//declaration with typedef
typedef struct {
  double x;
  double y;
  double z;
} vec3d;

void printVec3d(vec3d v)
{
  printf("(%.2f %.2f %.2f)", v.x, v.y, v.z);
}

double dotProd3d(vec3d a, vec3d b)
{
  return a.x * b.x + a.y * b.y + a.z * b.z;
}

//declaration without typedef
struct vec2d {
  double x;
  double y;
};

void printVec2d(struct vec2d v)
{
  printf("(%.2f %.2f)", v.x, v.y);
}

int main()
{
  vec3d v1 = { 1, 0, 1 };
  vec3d v2 = { 0, 1, 0 };

  printf("Dot product of vectors ");
  printVec3d(v1);
  printf(" and ");
  printVec3d(v2);
  printf(" equals to %f\n", dotProd3d(v1, v2));

  return 0;
}
