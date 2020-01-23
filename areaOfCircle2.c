#include <stdio.h>

float areaFunction (float r)
{
  float a;
  a = r*r*3.14;
  
  return a;
}

int main()
{
  char input[256];
  float r, rmin, rmax;
  
  printf("Smallest Radius: ");
  while (1)
  {
    fgets(input, 256, stdin);
    if(sscanf(input, "%f", &rmin) == 1) break;
    printf(" Please input a number.\n");
  }
  
  printf("Largest Radius: ");
  while(1)
  {
    fgets(input, 256, stdin);
    if(sscanf(input, "%f", &rmax) == 1) break;
    printf(" Please input a number.\n");
  }
  
  for (r = rmin ; r <= rmax ; r ++)
  {
    printf("Area: %.2f\n", areaFunction(r));
  }
  return 0;
}
