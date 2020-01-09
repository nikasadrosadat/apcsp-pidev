#include <stdio.h>
#include <string.h>

struct Student {
  char fname[256];
  char lname[256];
  int age;
  int studentID;
};

void printStudent(struct Student* student)
{
  printf("Student: %s %s\n", student->fname, student->lname);
  printf("Age: %d\n", student->age);
  printf("ID: %d\n", student->studentID);
}

int main()
{
  char input[256];
  char fname[256];
  char lname[256];
  int age;
  int studentID;
  struct Student student[100];

  int num;
  printf("How many students do you want to enter?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", &num);
  num = num - 1;

  for(int i = 0; i < num; i++)
  {
    printf("Enter first name:\n");
    fgets(input, 256, stdin);
    sscanf(input, "%s", fname);

    printf("Enter last name:\n");
    fgets(input, 256, stdin);
    sscanf(input, "%s", lname);

    printf("Enter age:\n");
    fgets(input, 256, stdin);
    sscanf(input, "%d", &age);

    printf("Enter student ID:\n");
    fgets(input, 256, stdin);
    sscanf(input, "%d", &studentID);

    strcpy(student[i].fname, fname);
    strcpy(student[i].lname, lname);
    student[i].age = age;
    student[i].studentID= studentID;

    printf("\n");
  }

  for(int i = 0; i < num; i++)
  {
    printStudent(&student[i]);
  }
}
