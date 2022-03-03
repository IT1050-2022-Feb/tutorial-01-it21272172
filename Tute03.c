/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int no=0;
  int sum;
  printf("Enter a number that you wnat to get the sum to :");
  scanf("%d", &no);
  for(int x=1; x<=no ;x++) {

    sum = sum + x;
  }
  printf("The sum is %d", sum);
  return 0;
}
