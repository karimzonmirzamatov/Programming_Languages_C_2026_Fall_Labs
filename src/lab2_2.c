#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
  int res = 1;
  for (int i = 1; i <= n; i++) {
    res *= i;
  }
  return res;  // placeholder
}

int main(void) {
  int n;

  printf("Enter a non-negative integer n: ");

  scanf("%d", &n);
  if (n < 0) {
    printf("You entered wrong number \n");
  }
  // TODO: validate input, call function, print result
  long long factorial1 = factorial(n);
  printf("factorial %lld\n ", factorial1);

  return 0;
}
