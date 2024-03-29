/*
 * HackerRank - C Introduction - Pointers in C
 * https://www.hackerrank.com/challenges/pointer-in-c/problem
 */

#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b)
{
  /*
  int a_dash = 0;
  int b_dash = 0;
  a_dash = *a + *b;
  b_dash = abs(*a - *b);
  *a = a_dash;
  *b = b_dash;
  */

  int sum = *a + *b;
  *b = abs(*a - *b);
  *a = sum;
}

int main()
{
  int a, b;
  int *pa = &a, *pb = &b;

  scanf("%d %d", &a, &b);
  update(pa, pb);
  printf("%d\n%d", a, b);

  return 0;
}