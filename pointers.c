#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

float d;
float* ptrtod;

  ptrtod = &d;

  d = 14;
  printf("The value of d is %f\n", d);

  *ptrtod = 7;
  printf("The value of d is %f\n", d);

  printf("The value of ptrtod is %f\n", ptrtod);
  printf("It stores the value %f\n", *ptrtod);
  printf("The address of d is %f\n", &d); 

float e;
float* ptrtoe;

  ptrtoe = &e;

  e = 5;
  printf("The value of e is %f\n", e);

  *ptrtoe = 6;
  printf("The value of e is %f\n", e);

  printf("The value of ptrtoe is %f\n", ptrtoe);
  printf("It stores the value %f\n", *ptrtoe);
  printf("The address of e is %f\n", &e); 
}
