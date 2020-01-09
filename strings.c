#include <stdio.h>
#include <string.h>

int main()
{
int i;
int x;
char alph1[26];
char alph2[26] = "abcdefghijlmnopqrstuvwxyz";
for (i = 0; i <= 25; i++)
{
	alph1[i] = 97 + i;
}
for (x = 0; x <= 25; x++)
{
	alph2[x] = 65 + x;
}
printf("%s\n", alph1);
printf("%s\n", alph2);

if (strcmp(alph1, alph2) == 0 )
{
	printf("The strings are the same. \n");

}
else
{
	printf("The strings are not the same. \n");
}
char alph3[52];
strcpy(alph3, alph1);
strcat(alph3, alph2);
printf("%s, %s \n", alph1, alph2, alph3);
}
