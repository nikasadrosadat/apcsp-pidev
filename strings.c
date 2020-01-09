
#include <stdio.h>
#include <string.h>

int main(){

  char string1[27];
  char string2[27]= "abcdefghijklmnopqrstuvwxyz";
  int compResult;
  char string3[53];

  for (int i= 0; i<26; i++){
    string1[i]=0x61 + 1;
  }
  compResult=strcmp(string1, string2);
  printf("First comparison result: %d\n", compResult);

  for (int i= 0; i< 26; i++){
    string1[i] -= 0x20;
  }
  compResult= strcmp(string1, string2);
  printf("Second comparison result: %d\n", compResult);

  strcat(string3, string1);
  strcat(string3, string2);
  printf("String 1: %s\n", string1);
  printf("String 2: %s\n", string2);
  printf("String 3: %s\n", string3);

}
