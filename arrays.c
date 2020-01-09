#include <stdio.h>

// arrayAdd function: Array arr[] has s size and is incremented by n
int arrayAdd(int arr[], int s, int n)
{
  arr[s];

  // For loop prints values in index from 0-s
  for (int i = 0; i < s; i++)
  {
    n = i*i;
    arr[i] = n;
    printf("%d\n", arr[i]);
  }
}

// Calling array function with an array size of 100
int main()
{
  int size = 100;
  int increment;
  int a[size];
  int function = arrayAdd(a, size, increment);
}
