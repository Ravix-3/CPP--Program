#include<stdio.h>
int main()
{
  int n , ans;
  printf("Enter a number: ");
  scanf("%d", &n);
  ans = n * n;
  printf("Square of %d is %d\n", n, ans);
  return 0;
}