#include <stdio.h>
#include <string.h>
#include "test.h"

struct rate
{
    char good[50];
    char aa[50];
    char ba[50];
    char GG[50];
};

void rateg(float gpa, float gm[])
{
  int i;
  struct rate rates;
  strcpy( rates.good, "FULL GPA");
  strcpy( rates.aa, "Excellent, keep working hard"); 
  strcpy( rates.ba, "Above average, good");
  strcpy( rates.GG, "GG");
  printf("GPA RATE:\n");
  if(gpa == 4.00)
  {
    printf("%s\n", rates.good);
  }
  else if(gpa >= 3.5)
  {
    printf("%s\n", rates.aa);
  }
  else if(gpa >= 3.0)
  {
    printf("%s\n", rates.ba);
  }
  else
  {
    printf("%s\n", rates.GG);
  }
  printf("GRADES RATE:\n");

  for (i=0; i<4; i++)
  {
    if(gm[i] == 4)
    {
      printf("Your %d period grade is excellent!\n", i+1);
    }
    else if(gm[i] == 3)
    {
      printf("Your %d period grade is above average!\n", i+1);
    }
     else if(gm[i] == 2)
    {
      printf("Your %d period grade is below average!\n", i+1);
    }
     else if(gm[i] == 1)
    {
      printf("Your %d period grade doesn't meet the requirement!\n", i+1);
    }
     else if(gm[i] == 0)
    {
      printf("Your %d period grade is bad!/No input.\n", i+1);
    }
  }
}
