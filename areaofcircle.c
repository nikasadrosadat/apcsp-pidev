#include <stdio.h>
#include <math.h>

// Circle area function definition
float areaOfCircle(float r)
{
  float a;
  a = M_PI*r*r;
  return a;
}

// Calling area function for radius 3.5-12.5
int main()
{
  for (float radius = 3.5; radius < 12.5; radius++)
  {
  float area;
  area = areaOfCircle(radius);
  printf("%f\n", area);
  }
}
