
#include <stdio.h>
#include <string.h>

int main()
{
  // string1 = String of lowercase alphabet using a for loop
  char string1[27];
  char character;
  int i = 0;  // Will be used in for loops

  for(character = 'a'; character <= 'z'; ++character)
  {
    string1[i] = character;
    i = i+1;
  }

  // string2 = String using string initilizer
  char string2[27] = "abcdefghijklmnopqrstuvwxyz";

  // Testing if string1 and string2 are the same
  char* str1p = string1;
  char* str2p = string2;

  if(*str1p = *str2p)
  {
    printf("string1 and string2 are the same\n");
  }

  // Changing string2 to be uppercase
  for(i = 0; i < 26; i++)
  {
    string2[i] = string2[i] - 32;
  }

  // Testing if string1 and string2 are different
  if(*str1p != *str2p)
  {
    printf("string 1 and string 2 are different\n");
  }

  // string3: Connects string1 and string2
  char string3[53];

  for(i = 0; i < 26; i++)
  {
    string3[i] = string1[i];
  }

  for(i = 26; i < 52; i++)
  {
    string3[i] = string2[i-26];
  }

  // Print out all three strings
  // Might make a function another time
  for(i = 0; i < 26; i++)
  {
    printf("%c", string1[i]);
  }
  printf("\n");

  for(i = 0; i < 26; i++)
  {
    printf("%c", string2[i]);
  }
  printf("\n");

  for(i = 0; i < 52; i++)
  {
    printf("%c", string3[i]);
  }
  printf("\n");
}
