#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void change(int i, char grade[], float gm[], int* n)
{
  switch(grade[i])
  {
  case 'A' :
    gm[i] = 4.0;
    break;
  case 'a' :
    gm[i] = 4.0;
    break;
  case 'B' :
    gm[i] = 3.0;
    break;
  case 'b' :
    gm[i] = 3.0;
    break;
  case 'C' :
    gm[i] = 2.0;
    break;
  case 'c' :
    gm[i] = 2.0;
    break;
  case 'D' :
    gm[i] = 1.0;
    break;
  case 'd' :
    gm[i] = 1.0;
    break;
  case 'F' :
    gm[i] = 0.0;
    break;
  case 'f' :
    gm[i] = 0.0;
    break;
  default :
    gm[i] = 0.0;
    *n = *n-1;
    printf("P%d: Not valid/No input.\n",i+1 );
    break;
   }
}
int main(int argc, char* argv[])
{
  char grade[5];
  float gm[5];
  float gpa = 0;
  char c;
  int i;
  int n = 4;

  //(for terminal)printf("THIS IS A UNWEIGHTED GPA CALCULATOR FOR YOUR CURRENT SCHOOL SEMESTER\n");

  for(i = 0; i < 4; i++)
  {
    //(for terminal)printf("Enter your %dst period grade mark:\n", i+1);
    //(for terminal)scanf("%c", &(grade[i]));
    sscanf(argv[i+1], "%c", &(grade[i]));
    //(for terminal)getchar();  //delete (enter)
    change(i, &grade[0], &gm[0], &n);
  }

  if (n == 0)
  {
    printf("YOUR GPA IS: 0.0\n");
  }
  else
  {
    gpa = ((gm[0] + gm[1] + gm[2] + gm[3])/n);
    printf("YOUR GPA IS: %f\n", gpa);
  }
  if (gpa > 3.0)
  {
    printf("Consider UCLA, UCSD, NYU, USC, Tulane University, University of Michigan, University of Virginia:))\n");
  }
  else if (gpa < 3.0)
  {
    printf("Consider University of Arizona, University of Boulder, Community Colleges, Utah State University, University of Wyoming, Lewis-Clark State College:((\n");
  }
  else
  {
    printf("Consider San Fransisco State University, Sonoma State University, Alabama State University, The College of New Jersey, University at Buffalo\n");
  }

