/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main() 
{
  int a, b;
  float total, avg;

  printf("Input mark 1 : ");
  scanf("%d", &a);

  printf("Input mark 2 : ");
  scanf("%d", &b);

  avg =(a + b) / 2;

  printf("Average = %.2f", avg);

  
  return 0;
}


