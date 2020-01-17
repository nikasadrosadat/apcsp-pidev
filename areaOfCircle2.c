#include <stdio.h>
#include <math.h>

// Circle area function definition
float areaOfCircle(float r)
{
  float a;
  a = M_PI*r*r;
  return a;
}

// Calling area function
int main()
{
  // Setting radii bounds
  float num1;
  float num2;
  float inc;
  char input[256];

  printf("Choose a number for the lower bound of the radii\n");
  while(1)
  {
    fgets(input, 256, stdin);
    if(sscanf(input, "%f", &num1) == 1) break;
    printf("Not a valid number. Try again\n");
  }

  do
  {
    printf("Choose a larger number for the upper bound\n");
    fgets(input, 256, stdin);
    sscanf(input, "%f", &num2);
  } while(num2 <= num1);

  // Setting how much to increment radius by
  printf("Choose a number to increment the radius by\n");
  while(1)
  {
    fgets(input, 256, stdin);
    if(sscanf(input, "%f", &inc) == 1) break;
    printf("Not a valid number. Try again\n");
  }

  // Executing area function
  for (float radius = num1; radius <= num2; radius = radius + inc)
  {
    float area;
    area = areaOfCircle(radius);
    printf("r = %f, a = %f\n", radius, area);
  }
}
